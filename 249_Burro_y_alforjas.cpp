// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

void resuelveCaso()
{
    long int burros, sacos;
    cin >> burros >> sacos;
    vector<int> peso(sacos);//Lista de pesos de los sacos.
    for (long int i = 0; i < sacos; i++)
    {
        cin >> peso[i];
    }

    //Tras leer los datos se resuelve el problema...

    //1º se ordena la lista.
    sort(peso.begin(), peso.end());

    //2º se analiza cuantos sacos hay emparejables (límite máximo en burros disponibles)
    long int burrosCargados = 0;
    long int i = 0;

    while (i < sacos-1)
    {
        if (peso[i] == peso[i + 1])
        {
            burrosCargados++;
            i = i + 2;
        }
        else
            i++;
    }
    if (burros < burrosCargados)
        burrosCargados = burros;

    //Se muestra el resultado
    cout << burrosCargados << endl;
}

int main() {


    int numCasos;
    cin >> numCasos;
    for (int i = 0; i < numCasos; ++i)
        resuelveCaso();


    return 0;
}