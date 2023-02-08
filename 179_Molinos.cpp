// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int molinos;
    cin >> molinos;
    while (molinos != 0)
    {
        vector<int> energy(molinos);

         int anterior = 0;
        for (int i = 0; i < molinos; i++)
        {
            cin >> energy[i];
            energy[i] += anterior;
            anterior = energy[i];
        }

        int consultas;
        cin >> consultas;
        for (int i = 0; i < consultas; i++)
        {
            int ini, fin, result = 0;
            cin >> ini >> fin;

            if (ini != 1)
                result = energy[fin-1] - energy[ini - 2];
            else
                result = energy[fin-1];

            cout << result << endl;
        }

        cin >> molinos;
    }
}