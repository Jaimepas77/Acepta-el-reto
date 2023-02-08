// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

typedef long long int lli;

int main()
{
	lli g;
	cin >> g;
	while (cin)
	{
		/*vector <vector<lli>> v(g);
		for (int i = 0; i < g; i++)
		{
			for (int j = 0; j < g; j++)
			{
				lli aux;
				cin >> aux;
				v[i].push_back(aux);
			}
		}*/

		vector<lli> vz(g / 2 + g % 2, 0);

		/* for(int i = 0; i < g/2 + g%2; i++)
		{
			for(int k = i; k < g-i;k++)
			{
				for(int j = i; j < g-i; j++)
				{
					if(k == i || j == i || k == g-i-1 || j == g-i-1)
						vz[i] += v[k][j];
				}
			}
		} */

		for (int i = 0; i < g; i++)
		{
			for (int j = 0; j < g; j++)
			{
				lli aux;
				cin >> aux;
				int r = i, s = j;
				if (i >= g / 2 + g % 2)
					r = g - i - 1;
				if (j >= g / 2 + g % 2)
					s = g - j - 1;

				vz[min(r, s)] += aux;
				
			}
		}

		for (int i = vz.size() - 1; i >= 0; i--)
		{
			cout << vz[i];
			if(i!=0)
				cout << " ";
		}

		cout << endl;

		cin >> g;
	}
}