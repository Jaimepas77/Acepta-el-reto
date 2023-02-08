// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

typedef string tPalabra[1000];

int main()
{
    tPalabra palabra;
    int numero;
    cin >> numero;
    string palabra1, palabra2, aux;
    for (int i = 0; i < numero; i++)
    {
        cin >> palabra1 >> aux >> palabra2;
        for (int j = 0; j < palabra1.length(); j++)
        {
            palabra1[j] = tolower(palabra1[j]);
        }
        for (int j = 0; j < palabra2.length(); j++)
        {
            palabra2[j] = tolower(palabra2[j]);
        }
        if (palabra1 == palabra2)
        {
            cout << "TAUTOLOGIA" << endl;
        }
        else
        {
            cout << "NO TAUTOLOGIA" << endl;
        }
    }
}