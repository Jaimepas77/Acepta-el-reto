// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
//#include <string>

using namespace std;

int main()
{
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        int malas = 0, contador, uvas, num, denom;
        cin >> uvas >> num >> denom;
        for (int i = 0; i < uvas; i++)
        {
            if (i % denom < num)
            {
                malas++;
            }
        }
        cout << malas << "\n";
    }
}