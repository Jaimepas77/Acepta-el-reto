// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        int uno, dos;
        cin >> uno >> dos;
        int diferencia;
        if (uno > dos)
        {
            diferencia = uno - dos;
            uno = dos;
        }
        else
        {
            diferencia = dos - uno;
        }
        for (int i = uno + 1; i < uno + diferencia + 2; i++)
        {
            cout << i;
            if (i < uno + diferencia + 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}