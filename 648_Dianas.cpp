// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ascender(vector<vector<int>>& m, const vector<int>& sector)
{
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[0].size(); j++)
        {
            if (j == 0)
            {
                m[i][j] = 0;
            }
            else if (i == 0)
            {
                if (j >= sector[i] && m[i][j - sector[i]] != -1)
                    m[i][j] = m[i][j - sector[i]] + 1;
            }
            else
            {
                
                if (j < sector[i] || m[i][j - sector[i]] == -1)
                    m[i][j] = m[i - 1][j];
                else if (m[i - 1][j] == -1)
                    m[i][j] = m[i][j - sector[i]] + 1;
                else
                    m[i][j] = min(m[i][j - sector[i]] + 1, m[i - 1][j]);
            }
        }
    }
}

int descender(vector<vector<int>>& m, const vector<int>& sector, int i , int j) //Solución recursiva
{
    //-1 es indeterminado; -2 es infinito
    if (j < 0 || i < 0) //Si es imposible
    {
        return -1;
    }
    else if (m[i][j] != -1)
    {
        return m[i][j];
    }
    else if (j == 0)
    {
        m[i][j] = 0;
        return m[i][j];
    }
    else
    {
        int usar = descender(m, sector, i, j - sector[i]);
        int noUsar = descender(m, sector, i - 1, j);
        if (usar <= -1)
            m[i][j] = noUsar;
        else if (noUsar <= -1)
            m[i][j] = usar + 1;
        else
            m[i][j] = min(usar + 1, noUsar);

        if (m[i][j] == -1)
            m[i][j] = -2;

        return m[i][j];
    }
}

pair<int, vector<int>> reconstruir(const vector<vector<int>> &m, const vector<int>& sector)
{
    int ret = m[m.size() - 1][m[0].size() - 1];
    vector <int> v;
    if (ret > -1)//Debe asegurarse que hay una solución para poder reconstruirla.
    {
        int i = m.size() - 1, j = m[0].size() - 1;
        while (ret != v.size())
        {
            if (i == 0)
            {
                v.push_back(sector[i]);
                j -= sector[i];
            }
            else if (j < sector[i])
            {
                i--;
            }
            else if (m[i][j - sector[i]] == m[i][j] - 1)
            {
                v.push_back(sector[i]);
                j -= sector[i];
            }
            else
            {
                i--;
            }
        }
    }

    return { ret, v };
}

// función que resuelve el problema
// comentario sobre el coste, O(f(N)), donde N es ...
pair<int, vector<int>> resolver(const vector<int> &sectores, int objetivo) {
    //Función recursiva: ...

    //Tres pasos: Construir la tabla y reconstruir la solución.
    //La tabla tendrá como columnas las puntuaciones que se quieren obtener.
    //La tabla tendrá como filas los sectores de las distintas puntuaciones que se están usando (nótese que se dan ordenados)
    //Este planteamiento funciona porque se cumple el principio de optimalidad de Bellman

    //Se puede resolver con programación dinámica descendente o ascendente. Dado que se debe reconstruir la solución, lo más adecuado es emplear PD descendente (recursividad), pero en realidad ambas opciones son válidas.
    vector<int>aux(objetivo + 1, -1);
    vector<vector<int>>tabla(sectores.size(), aux);
    //PD ascendente
    ascender(tabla, sectores);

    //PD descendente
    //descender(tabla, sectores, sectores.size() - 1, objetivo);

    //Reconstrucción de la solución
    return reconstruir(tabla, sectores);
}

// resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {

    // leer los datos de la entrada
    int objetivo, numSectores;//Puntuación objetivo y nº de sectores de la diana
    cin >> objetivo >> numSectores;

    if (!std::cin)  // fin de la entrada
        return false;

    vector<int>v(numSectores);
    for (int i = 0; i < numSectores; i++)
        cin >> v[i];

    pair<int, vector<int>> sol = resolver(v, objetivo);

    // escribir sol
    if (sol.first <= -1)
        cout << "Imposible\n";
    else
    {
        cout << sol.first << ":";
        for (const auto& x : sol.second)
            cout << " " << x;
        cout << '\n';
    }

    return true;
}

int main() {

    while (resuelveCaso());
    return 0;
}