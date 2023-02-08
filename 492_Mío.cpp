// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long int lli;

lli mcd(lli a, lli b)
{
    lli x = max(a, b);
    lli y = min(a, b);

    if(y == 0)
        return x;
    else
        return mcd(y, x%y);
}

int main()
{
    lli a, b, c;
    cin >> a >> b >> c;
    while(a != 0)
    {
        lli mcm = a*b / mcd(a, b);

        cout << c/mcm << '\n';

        cin >> a >> b >> c;
    }
}