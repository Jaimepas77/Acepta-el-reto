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
        bool rosco = false, media = false;
        double num;
        for (int j = 0; j < 5; j++)
        {
            cin >> num;
            if (num == 0)
            {
                rosco = true;
            }
            else if (num >= 9)
            {
                media = true;
            }
        }
        if (rosco && !media)
        {
            cout << "SUSPENSO DIRECTO" << endl;
        }
        else
        {
            cout << "MEDIA" << endl;
        }
    }
    return 0;
}