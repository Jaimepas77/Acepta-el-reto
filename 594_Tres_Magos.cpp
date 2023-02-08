// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct nodo
{
    char kind = 0;//Tipo de celda (hueco, pared, trofeo)
    bool visitedFast = false;//Visitado por Hermione
    //bool visitedSlow = false;//Visitado por Harry
};

bool dentro(int x, int y, int h, int w)
{
    return x >= 0 && y >= 0 && x < h&& y < w;
}

pair<int, int> mover(int x, int y, int enfoque) {
    //0-arriba, 1-derecha, 2-abajo, 3-izq
    switch (enfoque) {
    case 0: return { x-1, y };
    case 1: return { x, y+1 };
    case 2: return { x+1, y };
    case 3: return { x, y-1 };
    default: return { -1, -1 };//Error
    }
}

int dijkstra(vector<vector<nodo>>& m, int x, int y, int h, int w)
{
    queue<pair<int, int>> explore;//Nodos pendientes de explorar
    explore.push({ x, y });//Explorar el primer nodo
    int paso = 0;
    bool terminado = false;
    while (!terminado)
    {
        paso++;
        terminado = true;//Cambiar si se encuentra un nodo para explorar
        queue<pair<int, int>> nuevos;//Nuevos nodos a explorar

        while (!explore.empty())//Mientras no se hayan explorado todos los nodos de ese nivel...
        {
            pair<int, int> act = explore.front();
            explore.pop();
            for (int i = 0; i < 4; i++)//Recorrer todos los enfoques
            {
                pair<int, int> result = mover(act.first, act.second, i);//Moverse ahí
                if (dentro(result.first, result.second, h, w) && !m[result.first][result.second].visitedFast)//Si el mov es válido (y no visitado)
                {
                    m[result.first][result.second].visitedFast = true;
                    if (m[result.first][result.second].kind == '.')//Libre
                    {
                        nuevos.push(result);
                        terminado = false;
                    }
                    else if (m[result.first][result.second].kind == 'T')//Trofeo
                    {
                        return paso;
                    }
                }
            }
        }
        explore = nuevos;
    }
    return -1;//Se ha explorado todo sin encontrar el trofeo
}

int derecha(vector<vector<nodo>>& m, int x, int y, int h, int w)
{
    pair<int, int> inicio = { x, y };
    int enfoque = 0;//0-arriba, 1-derecha, 2-abajo, 3-izq
    //Inicializar el enfoque
    if (x == 0)
        enfoque = 2;
    else if (y == 0)
        enfoque = 1;
    else if (x == h - 1)
        enfoque = 0;
    else if (y == w - 1)
        enfoque = 3;

    int pasos = 0;
    while (m[x][y].kind != 'T')
    {
        //mover siguiendo el algoritmo de la mano derecha
        enfoque = (enfoque + 1) % 4;//Girar a la derecha
        for (int i = 0; i < 4; i++)
        {
            pair<int, int> result = mover(x, y, enfoque);//Moverse ahí
            if (dentro(result.first, result.second, h, w) && 
                (m[result.first][result.second].kind == '.' || m[result.first][result.second].kind == 'T'))//Si el mov es válido
            {
                //Se realiza
                x = result.first;
                y = result.second;
                break;
            }
            enfoque = (enfoque + 3) % 4;//Es como restar 1 solo que cuando le restas 1 a 0 se convierte en 3 (propiedades de los anillos de mates)
        }

        if (inicio.first == x && inicio.second == y)
            return -1;//Has vuelto a inicio

        pasos++;
    }
    return pasos;
}

int main()
{
    int w, h;//Height, Width
    cin >> w >> h;
    while (cin)
    {
        int x = 0, y = 0;//Posición de inicio (ajustar según la entrada)
        vector<vector<nodo>> m(h);
        vector<nodo> aux(w);
        for (int i = 0; i < m.size(); i++)
        {
            for (int j = 0; j < aux.size(); j++)
            {
                char in;
                cin >> in;

                aux[j].kind = in;
                if (i == h - 1 && in == '.')
                {
                    x = i;
                    y = j;
                }
            }
            m[i] = aux;
        }

        int hermione = dijkstra(m, x, y, h, w);

        //LIMITAR SI HERMIONE = -1
        int harry = -1;
        if(hermione != -1)
            harry = derecha(m, x, y, h, w);//retorna -1 en caso de ser imposible

        //cout << hermione << " "  << harry << endl;//Comprobación de cálculo
        //cout << x << " " << y << endl;//Comprobación de lectura correcta

        if (hermione == -1)
            cout << "IMPOSIBLE";
        else if (harry == -1)
            cout << "INF";
        else if (harry > hermione)
            cout << harry - hermione;
        else if (hermione == harry)
            cout << "IGUAL";

        cout << endl;

        cin >> w >> h;
    }
}