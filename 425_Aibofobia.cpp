// Usuario de Acepta el reto: jjjjjjjp022
// Comentario general sobre la solución,
// explicando cómo se resuelve el problema

#include <iostream>
#include <vector>
#include <algorithm>
//#include <cmath>

//estructuras de datos de clase

using namespace std;

// función que resuelve el problema
// comentario sobre el coste, O(f(N)), donde N es ...

//Recursión:
//resolver(i, j) donde i es el índice de la letra izquierda a asociar y j el de la derecha
// 
//resolver(i, i) = 0
//resolver(i, j) = 0 si i > j
//resolver(i, j) = resolver(i+1, j-1) si palabra[i] = palabra[j]
//resolver(i, j) = max(resolver(i+1, j)+1, resolver(i, j-1)+1) si palabra[i] != palabra[j]
int resolver(const string &palabra, int i, int j, vector<vector<int>>& m) {
    if (m[i][j] == -1)
    {
        if (i == j)
        {
            m[i][j] = 0;
        }
        else if (i > j)
        {
            m[i][j] = 0;
        }
        else if (palabra[i] == palabra[j])
        {
            m[i][j] = resolver(palabra, i + 1, j - 1, m);
        }
        else
        {
            m[i][j] = min(resolver(palabra, i + 1, j, m)+1, resolver(palabra, i, j - 1, m)+1);//Mejor caso entre avanzar por izq o dcha
        }
    }

    return m[i][j];
}

string reconstruir(const string& palabra, int i, int j, const vector<vector<int>>& m)//Coste en tiempo O(n^2) siendo n la long de la palabra (en el caso peor 200*200 = 20000)
{
    if (i < j)
    {
        if (palabra[i] == palabra[j])
        {
            return palabra[j] + reconstruir(palabra, i + 1, j - 1, m) + palabra[j];
        }
        else if (m[i][j - 1] == m[i][j] - 1)//Complemento a la dcha
        {
            return palabra[j] + reconstruir(palabra, i, j - 1, m) + palabra[j];
        }
        else
        {
            return palabra[i] + reconstruir(palabra, i + 1, j, m) + palabra[i];
        }
    }
    else if (i == j)
    {
        return { palabra[i] };
    }
    else
        return "";
}

// resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {

    // leer los datos de la entrada
    string palabra;
    cin >> palabra;
    if (!std::cin)  // fin de la entrada
        return false;

    vector<int> aux(palabra.size(), -1);
    vector<vector<int>> m(palabra.size(), aux);
    int sol = resolver(palabra, 0, palabra.size()-1, m);
    //string palindromo = reconstruir(palabra, 0, palabra.size()-1, m);

    // escribir sol
    cout << sol << endl;

    return true;
}

int main() {
    // ajustes 

    while (resuelveCaso());
    return 0;
}