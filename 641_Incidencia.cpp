#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;

int main()
{
	lli l, n;
	cin >> l >> n;
	while(n != 0 || l != 0)
	{
		lli max = 0, acum = 0;
		vector<int> v(l);
		for(lli i = 0; i < l; i++)
		{
			cin >> v[i];
			acum += v[i];
		}
		max = acum;
		lli cont = 0;
		for(lli i = l; i < n; i++)
		{
			acum -= v[cont];
			cin >> v[cont];
			acum += v[cont];
			cont = (cont+1)%l;
			
			if(max < acum)
				max = acum;
		}
		
		cout << max << '\n';
		
		cin >> l >> n;
	}
}