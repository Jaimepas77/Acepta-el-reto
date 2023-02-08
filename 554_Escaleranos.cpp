// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;

typedef long long int lli;

int main()
{
	int peld, n;
	cin >> peld;
	while (peld)
	{
		cin >> n;
		vector <int> v(n);
		for (int& x : v)
			cin >> x;

		//Resolver/
		vector <lli> maneras(peld + 1, 0);
		maneras[0] = 1;
		for (int i = 0; i < peld; i++)
		{
			for (const int& x : v)
			{
				if (i + x <= peld)
				{
					maneras[i + x] += maneras[i];
					maneras[i + x] %= 1000000007;
				}
			}
		}

		cout << maneras[peld] << '\n';
		///////////

		cin >> peld;
	}
}