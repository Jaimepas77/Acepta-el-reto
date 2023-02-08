// Usuario de Acepta el reto: jjjjjjjp022
// Yo soy tu.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        string a, b;
        cin >> a >> b;
        string c = a + ", yo soy tu " + b;
        if (a == "Luke" && b == "padre")
        {
            cout << "TOP SECRET\n";
        }
        else
        {
            cout << c << endl;
        }
    }
}