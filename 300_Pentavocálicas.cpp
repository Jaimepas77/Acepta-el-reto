// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <cmath>

using namespace std;

typedef bool tVocales[5];

int main()
{
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        string palabra;
        tVocales vocal = { false };
        cin >> palabra;
        for (int j = 0; j < palabra.size(); j++)
        {
            switch (palabra[j])
            {
            case 'a':  vocal[0] = true;
                break;
            case 'e':  vocal[1] = true;
                break;
            case 'i':  vocal[2] = true;
                break;
            case 'o':  vocal[3] = true;
                break;
            case 'u':  vocal[4] = true;
                break;
            }
        }
        if (vocal[0] == true && vocal [1] == true && vocal[2] == true && vocal[3] == true && vocal[4] == true)
        {
            cout << "SI" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}