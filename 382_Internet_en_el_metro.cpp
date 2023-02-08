// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <deque>

using namespace std;

typedef long long int lli;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        lli length, amount;
        cin >> length >> amount;

        deque <pair<lli, lli>> v;
        lli point, rad;

        while(amount--)
        {
            cin >> point >> rad;
            while(!v.empty() && v.back().first >= point-rad)
            {
                v.pop_back();
            }
            if(v.empty() || v.back().second < point+rad)
                v.push_back({point-rad, point+rad});
        }

        lli prev;
        bool ok = true;
        if(v.front().first > 0)
            ok = false;
        prev = v.front().second;
        v.pop_front();
        while(ok && !v.empty())
        {
            if(prev < v.front().first)
                ok = false;
            prev = v.front().second;
            v.pop_front();
        }

        if(prev < length)
            ok = false;
        
        if(ok)
            cout << "SI\n";
        else
            cout << "NO\n";
    }
}