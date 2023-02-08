// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
    int casos;
    cin >> casos;
    while (casos != 0)
    {
        bool result = true;
        long long int max = 0, tmp;
        for (int k = 0; k < casos; k++)
        {
            cin >> tmp;
            if (tmp > max)
                max = tmp;
            else
                result = false;
        }

        if (result)
            cout << "SI\n";
        else
            cout << "NO\n";

        cin >> casos;
    }
}