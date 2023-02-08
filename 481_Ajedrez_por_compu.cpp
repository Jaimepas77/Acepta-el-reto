// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <string>

using namespace std;



typedef int tTablero[100];
typedef string tTablero1[100];

int main()
{
    tTablero columna, fila;
    tTablero1 columna1;

    string dato;
    int contador = 0;
    do 
    {
        getline(cin,dato);
        columna[contador] = dato[0] - '0';
        fila[contador] = dato[2] - '0';
        contador++;
    } while (dato != "0 0");
    for (int i = 0; i < contador - 1; i++)
    {
        if (columna[i] == 1)
        {
            columna1[i] = "h";
        }
        else
        {
            if (columna[i] == 2)
            {
                columna1[i] = "g";
            }
            {
                if (columna[i] == 3)
                {
                    columna1[i] = "f";
                }
                else {
                    if (columna[i] == 4)
                    {
                        columna1[i] = "e";
                    }
                    else
                    {
                        if (columna[i] == 5)
                        {
                            columna1[i] = "d";
                        }
                        else
                        {
                            if (columna[i] == 6)
                            {
                                columna1[i] = "c";
                            }
                            else {
                                if (columna[i] == 7)
                                {
                                    columna1[i] = "b";
                                }
                                else {
                                    if (columna[i] == 8)
                                    {
                                        columna1[i] = "a";
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << columna1[i] << fila[i] << endl;
    }
}