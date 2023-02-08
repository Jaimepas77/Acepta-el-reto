// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

typedef char tMatriz[9][9];

int main()
{
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        tMatriz sudoku;
        int contador = 0;
        for (int j = 0; j < 9; j++)
        {
            for (int k = 0; k < 9; k++)
            {
                cin >> sudoku[j][k];
                if (sudoku[j][k] != '-')
                {
                    contador++;
                }
            }
        }

        bool cumple = true;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if ((sudoku[i][j] != '-' && sudoku[8 - i][8 - j] == '-') || (sudoku[i][j] == '-' && sudoku[8 - i][8 - j] != '-'))
                {
                    cumple = false;
                }
            }
        }

        if (contador <= 32 && cumple)
        {
            cout << "SI" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}