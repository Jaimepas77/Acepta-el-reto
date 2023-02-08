// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

//#include "..."  // propios o los de las estructuras de datos de clase
using namespace std;

typedef long long int lli;

// función que resuelve el problema
// comentario sobre el coste, O(f(N)), donde N es ...
//Iterativo??
//Recurrencia:
// //cofres(i, j) i es la cantidad de cofres tenidos en cuenta y j es la profundidad tenida en cuenta. El resultado es la cantidad máxima de oro que puedes conseguir.
//cofres(0, j) = 0; (para todo j siendo todas las profundidades posibles (oxigeno/3))
//cofres(i, 0) = 0;
//cofres(i, j) = max(cofres(i, j-cofi) + cofiVal, cofres(i-1, j));
lli resolver(const vector<pair<lli, lli>> &cofres, vector<vector<lli>> &m, int i, int j) {
    if (i == 0 || j <= 0)
        return 0;
    else if(m[i][j] != 0)
    {
        return m[i][j];
    }
    else
    {
        if (j >= cofres[i - 1].first)
            m[i][j] = max(resolver(cofres, m, i - 1, j - cofres[i - 1].first) + cofres[i - 1].second, resolver(cofres, m, i - 1, j));
        else
            m[i][j] = resolver(cofres, m, i - 1, j);
        return m[i][j];
    }
}

void reconstruir(vector<pair<lli, lli>>& elegidos, const vector<pair<lli, lli>>& cofres, const vector<vector<lli>>& m)
{
    lli i = m.size()-1, j = m[0].size()-1;
    while (j > 0 && i > 0)
    {
        if (m[i][j] != m[i - 1][j])
        {
            j -= cofres[i - 1].first;
            elegidos.push_back(cofres[i - 1]);
        }

        i--;
    }
}

// resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {

    // leer los datos de la entrada
    lli oxigeno;
    cin >> oxigeno;
    oxigeno /= 3;

    if (!std::cin)  // fin de la entrada
        return false;

    int n;
    cin >> n;
    vector<pair<lli, lli>> v(n);//Cofres (profundidad-precio)
    for (auto& x : v)
        cin >> x.first >> x.second;

    vector<pair<lli, lli>> elegidos;
    vector<lli>aux(oxigeno+1, 0);
    vector<vector<lli>> m(n+1, aux);

    lli sol = resolver(v, m, n, oxigeno);
    reconstruir(elegidos, v, m);

    // escribir sol
    cout << sol << '\n' << elegidos.size() << '\n';
    for (int i = elegidos.size()-1; i >= 0; i--)
    {
        cout << elegidos[i].first << ' ' << elegidos[i].second << '\n';
    }
    cout << "----\n";

    return true;
}

int main() {

    while (resuelveCaso());
    return 0;
}