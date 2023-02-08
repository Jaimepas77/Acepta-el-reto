// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        int km = 1, out = 0, tmp = 0;
        while (km != 0)
        {

            cin >> km;
            if (km != 0)
            {
                out = out + ((tmp + km) * 2);
                tmp = tmp + km;
            }
        }
        cout << out << endl;
        
    }return 0;
}