// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

long long int baseSeis(long long int num) 
{
    if (num / 6 == 0)
        return num % 6;
    else
        return baseSeis(num / 6)*10 + num % 6;
}

int main()
{
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        long long int num;
        cin >> num;
        cout << baseSeis(num) << endl;

    }
}