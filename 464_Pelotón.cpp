// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (cin)
    {
        char aux;
        struct tHora {
            int segundos, position, clasif;
        };
        vector <tHora> time(n, { 0, -1 , 0});
        
        int tmp;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            time[i].segundos += tmp * 60 * 60;
            cin.get(aux);
            cin >> tmp;
            time[i].segundos += tmp * 60;
            cin.get(aux);
            cin >> tmp;
            time[i].segundos += tmp;
            time[i].position = i;
        }

        //Ordenar por segundos (menor a mayor) (método de la burbuja)
        bool ordenado = false;
        while (!ordenado)
        {
            ordenado = true;
            for (int i = 1; i < n; i++)
            {
                if (time[i - 1].segundos > time[i].segundos)
                {
                    ordenado = false;
                    swap(time[i - 1], time[i]);
                }
            }
        }

        //Asignar clasificación
        time[0].clasif = 1;
        for (int i = 1; i < n; i++)
        {
            if (time[i].segundos <= time[i - 1].segundos + 1)
                time[i].clasif = time[i - 1].clasif;
            else
                time[i].clasif = i + 1;
        }

        //Ordenar por position (método de la burbuja)
        ordenado = false;
        while (!ordenado)
        {
            ordenado = true;
            for (int i = 1; i < n; i++)
            {
                if (time[i - 1].position > time[i].position)
                {
                    ordenado = false;
                    swap(time[i - 1], time[i]);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << time[i].clasif << endl;
        }
        cout << "---" << endl;

        cin >> n;
    }
}