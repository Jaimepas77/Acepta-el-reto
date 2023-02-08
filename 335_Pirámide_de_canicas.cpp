// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        unsigned long long int niveles, canicas = 0;
        cin >> niveles;
        for (int i = 1; i <= niveles; i++)
        {
            canicas = canicas + i * (niveles + 1 - i);
        }
        cout << canicas << endl;
    }
}