// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
//#include <string>

using namespace std;

int main()
{
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        int boletos, contador = 0, boleto;
        cin >> boletos;
        for (int j = 0; j < boletos; j++)
        {
            cin >> boleto;
            if (boleto % 2 == 0)
            {
                contador++;
            }
        }
        cout << contador << "\n";
    }
}