// Usuario de Acepta el reto: jjjjjjjp022
// Comentario general sobre la solución,
// explicando cómo se resuelve el problema

#include <iostream>
#include <vector>

//estructuras de datos de clase

using namespace std;

// función que resuelve el problema
// comentario sobre el coste, O(f(N)), donde N es ...

//Recurrencia:
// rellenar(i, j) = subsecuencia común más larga teniendo en cuenta i caracteres de uno y j caracteres de dos.
// 
// rellenar(0, j) = rellenar(i, 0) = 0
// rellenar(i, j) = max(rellenar(i, j-1), rellenar(i-1, j)) si uno[i] != dos[j]
// rellenar(i, j) = rellenar(i-1, j-1) + 1 si uno[i] == dos[j]
//

int rellenar(vector<vector<int>>& m, const string &uno, const string &dos, int i, int j)//Versión recursiva
{
    if (i == 0 || j == 0)//Los índices se consideran -1 cadena vacía y 0 para cuando hay un elemento
    {
        m[i][j] = 0;
        return m[i][j];
    }
    else if (m[i][j] != -1)
    {
        return m[i][j];
    }
    else if (uno[i-1] == dos[j-1])
    {
        m[i][j] = rellenar(m, uno, dos, i - 1, j - 1) + 1;
        return m[i][j];
    }
    else
    {
        m[i][j] = max(rellenar(m, uno, dos, i - 1, j), rellenar(m, uno, dos, i, j - 1));
        return m[i][j];
    }
}

string reconstruir(const vector<vector<int>> m, string uno, string dos)
{
    string ret = "";
    int i = uno.size(), j = dos.size();
    while (i > 0 && j > 0)
    {
        if (uno[i-1] == dos[j-1])
        {
            ret = uno[i-1] + ret;
            i--;
            j--;
        }
        else if (m[i][j] == m[i - 1][j])
        {
            i--;
        }
        else
            j--;
    }

    return ret;
}

string resolver(string uno, string dos) {
    vector<int> aux(dos.size()+1, -1);
    vector<vector<int>> m(uno.size()+1, aux);
    int num = rellenar(m, uno, dos, uno.size(), dos.size());
    cout << num << endl;
    return "";// reconstruir(m, uno, dos);
}

// resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {

    // leer los datos de la entrada
    string uno, dos;
    cin >> uno >> dos;

    if (!std::cin)  // fin de la entrada
        return false;

    string sol = resolver(uno, dos);

    // escribir sol
    //cout << sol << '\n';

    return true;
}

int main() {

    while (resuelveCaso());
    return 0;
}