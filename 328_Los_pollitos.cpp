// Usuario de Acepta el reto: jjjjjjjp022
// #include <iostream>
#include <stdio.h>
#include <stdlib.h>

// using namespace std;

// struct tGallinero
// {
//     int tablero[50][50];
//     int filas, columnas;
// };

// struct tPosicion
// {
//     int filas, columnas;
// };

int main()
{
    int casos;
    // cin >> casos;
    scanf("%d", &casos);
    while(casos--)
    {
        // tGallinero corral = { 0 };
        int filas, columnas;//Size
        int pollitos;

        // cin >> filas >> columnas >> pollitos;
        scanf("%d %d %d", &filas, &columnas, &pollitos);

        int tablero[filas][columnas];
        int i = 0;
        while(i < filas) {
            int j = 0;
            while( j < columnas) {
                tablero[i][j] = 0;
                j++;
            }
            i++;
        }

        while(pollitos--)
        {
            // tPosicion pos;
            int posFilas, posColumnas;
            int pasos, contador = 1;
            int cont = 0;//Toca aumentar? (espiral)
            char orient;//Lugar al que mira el pollito...
         
            // cin >> posFilas >> posColumnas >> orient >> pasos;
            scanf("%d %d %c %d", &posFilas, &posColumnas, &orient, &pasos);

            posFilas--;
            posColumnas--;

            int estado = contador;//(pasos que le quedan para girar)
            
            while (pasos >= 0)
            {
                tablero[posFilas][posColumnas]++;

                if (orient == 'E')
                {
                    if (columnas > posColumnas + 1)
                    {
                        posColumnas++;
                        pasos--;
                        estado--;
                        if (estado == 0)
                        {
                            if (cont)
                            {
                                cont = 0;
                                contador++;
                            }
                            else
                            {
                                cont = 1;
                            }
                            estado = contador;
                            orient = 'S';
                        }
                    }
                    else
                    {
                        break;
                    }
                }
                else if (orient == 'S')
                {
                    if (filas > posFilas + 1)
                    {
                        posFilas++;
                        pasos--;
                        estado--;
                        if (estado == 0)
                        {
                            if (cont)
                            {
                                cont = 0;
                                contador++;
                            }
                            else
                            {
                                cont = 1;
                            }
                            estado = contador;
                            orient = 'W';
                        }
                    }
                    else
                    {
                        break;
                    }
                }
                else if (orient == 'W')
                {
                    

                    if (0 <= posColumnas - 1)
                    {
                        posColumnas--;
                        pasos--;
                        estado--;
                        if (estado == 0)
                        {
                            if (cont)
                            {
                                cont = 0;
                                contador++;
                            }
                            else
                            {
                                cont = 1;
                            }
                            estado = contador;
                            orient = 'N';
                        }
                    }
                    else
                    {
                        break;
                    }
                }
                else if (orient == 'N')
                {
                    

                    if (0 <= posFilas - 1)
                    {
                        posFilas--;
                        pasos--;
                        estado--;
                        if (estado == 0)
                        {
                            if (cont)
                            {
                                cont = 0;
                                contador++;
                            }
                            else
                            {
                                cont = 1;
                            }
                            estado = contador;
                            orient = 'E';
                        }
                    }
                    else
                    {
                        break;
                    }
                }
                
            }
            // tablero[posFilas][posColumnas]++;
        }

        i = 0;
        while (i < filas)
        {
            int j = 0;
            while (j < columnas )
            {
                // cout << tablero[i][j];
                printf("%d", tablero[i][j]);
                if (j < columnas - 1)
                {
                    // cout << " ";
                    printf(" ");
                }
                j++;
            }
            // cout << "\n";
            printf("\n");
            i++;
        }
        // cout << "---\n";
        printf("---\n");
    }
}