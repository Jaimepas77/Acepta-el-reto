// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <utility>

using namespace std;

typedef long long int lli;

bool validar(const vector<lli>&sol)
{
	return sol[2] < sol[1] + sol[0];
}

int main()
{
	int casos;
	cin >> casos;
	while (casos--)
	{
		lli n;
		cin >> n;
		if (n < 3)
		{
			lli aux;
			while (n--)
			{
				cin >> aux;
			}
			cout << "NO HAY NINGUNO\n";
		}
		else
		{
			lli aux;
			vector <lli> v;
			while (n--)
			{
				cin >> aux;
				v.push_back(aux);
			}
			sort(v.begin(), v.end());

			vector<lli>sol(3);
			sol = { v[v.size() - 1],  v[v.size() - 2] ,  v[v.size() - 3] };
			sort(sol.begin(), sol.end());

			bool valido = validar(sol);
			if (v.size() > 3)
			{
				for (lli i = v.size() - 4; i >= 0 && !valido; i--)
				{
					sol[2] = v[i];
					sort(sol.begin(), sol.end());
					valido = validar(sol);
				}
			}

			if (!valido)
				cout << "NO HAY NINGUNO\n";
			else
				cout << sol[0]+sol[1]+sol[2] << '\n';
		}
	}
}