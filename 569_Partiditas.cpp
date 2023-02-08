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
        int tpartida, clases, tanterior = 0, tsiguiente;
        int tglobal = 0;
        cin >> tpartida >> clases;
        for (int j = 0; j < clases; j++)
        {
            int hora, mins, dur;
            cin >> hora;
            cin.ignore(1);
            cin >> mins >> dur;
            tsiguiente = (hora - 8)*60 + mins;
            if (tanterior + tpartida <= tsiguiente)
            {
                tglobal += tsiguiente - tanterior;
            }

            tanterior = (hora - 8)*60 + mins + dur;
        }
        if (14 * 60 - 8 * 60 - tanterior >= tpartida)
        {
            tglobal += (14 * 60 - 8 * 60 - tanterior);
        }
        cout << tglobal << endl;
        
    }
    return 0;
}