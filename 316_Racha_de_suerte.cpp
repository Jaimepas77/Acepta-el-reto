// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        long long int apuestas;
        cin >> apuestas;
        int tmp, acum = 0, max = 0, ini = 1, fin = 1, iniRec, finRec;

        for (long long int j = 0; j < apuestas; j++)
        {
            cin >> tmp;

            if (tmp + acum > 0)
            {
                acum += tmp;
                //fin = j + 1;//Eliminable

            }
            else
            {
                ini = j + 1 + 1;
                acum = 0;
            }

            if (acum > max || (acum == max && max != 0 && j + 1 - ini < finRec - iniRec))
            {
                max = acum;
                iniRec = ini;
                finRec = j+1;
            }
        }
        cout << iniRec << " " << finRec << endl;
    }
}