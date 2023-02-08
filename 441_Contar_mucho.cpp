// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string incremento(string t, int elem, int punt);

int main()
{
    
    string t;
    while (cin >> t)
    {
        cout << incremento(t, t.size() - 1, 1) << endl;
    }
    
    return 0;
}

string incremento(string t, int elem, int punt)
{
    switch (t[elem])
    {
    case '0':
        t[elem] = '1';
        break;
    case '1':
        t[elem] = '2';
        break;
    case '2':
        t[elem] = '3';
        break;
    case '3':
        t[elem] = '4';
        break;
    case '4':
        t[elem] = '5';
        break;
    case '5':
        t[elem] = '6';
        break;
    case '6':
        t[elem] = '7';
        break;
    case '7':
        t[elem] = '8';
        break;
    case '8':
        t[elem] = '9';
        break;
    case '9':
        t[elem] = '0';
        if (elem > 0)
        {
            t = incremento(t, elem - 1, ++punt);
        }
        else
        {
            if (punt % 3 == 0)
            {
                t = "1." + t;
            }
            else
            {
                t = '1' + t;
            }
            
        }
        break;
    case '.':
        t = incremento(t, elem - 1, punt);
        break;
    }
    return t;
}