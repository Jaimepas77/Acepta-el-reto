// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
    int n;//n: uvas totales, p: peso máximo
    long long int p;
    cin >> n;
    while (cin)
    {
        cin >> p;
        long long int maxl = 0, minb = p+1;
        int contador = 0;
        for (int i = 0; i < n; i++)
        {
            long long int tmp;
            cin >> tmp;
            if (tmp <= p / 2)
            {
                contador++;
                if (tmp > maxl)
                {
                    maxl = tmp;
                }
            }
            else if (tmp < minb)
            {
                minb = tmp;
            }
        }
        if (maxl + minb <= p)
            contador++;

        cout << contador << "\n";

        cin >> n;
    }
}