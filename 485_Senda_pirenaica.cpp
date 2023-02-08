// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <string>


using namespace std;

typedef long int tRecorrido[100];


typedef struct
{
    tRecorrido etapa;
    long int dias;
    long int max;
}tRuta;

typedef tRuta tRutas[1000];

int main()
{
    
    tRutas ruta;
    
    long int c = -1;
    do
    {
       
        c++;
        ruta[c].max = 0;
        cin >> ruta[c].dias;
        
        for (int i = 0; i < ruta[c].dias; i++)
        {
            cin >> ruta[c].etapa[i];
            ruta[c].max = ruta[c].max + ruta[c].etapa[i];
        }  


    } while (ruta[c].dias != 0);
    for (int d = 0; d < c; d++)
    {
        for (int i = 0; i < ruta[d].dias; i++)
        {
            cout << ruta[d].max;
            if (i != ruta[d].dias - 1)
            {
                cout << " ";
            }
            ruta[d].max = ruta[d].max - ruta[d].etapa[i];
        }
            cout << "\n";
        
    }
    return 0;

}