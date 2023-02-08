#include <iostream>
#include <unordered_map>

using namespace std;
using lli = long long int;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		lli c, max = 0, act = 0;
		cin >> c;
		unordered_map<lli, lli> m;//para cada capítulo el día en el que apareció
		for(lli i = 0; i < c; i++)
		{
			act++;
			lli aux;
			cin >> aux;
			
			if(m.count(aux) > 0 && m[aux] >= i - act)
			{
				act = i - m[aux];
				m[aux] = i;
			}
			else
			{
				m[aux] = i;
			}
			
			if(act > max)
				max = act;
		}
		
		cout << max << '\n';
	}
}