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
        int uno, dos;
        cin >> uno >> dos;
        cout << uno * (dos + 1) + dos * (uno + 1) << endl;
    }
    return 0;
}