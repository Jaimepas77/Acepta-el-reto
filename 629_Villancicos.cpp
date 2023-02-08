// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <utility>

using namespace std;

typedef long long int lli;

int main()
{
	int n;
	cin >> n;
	while (n)
	{
		vector <int>v(n);
		while (n--)//Lectura invertida
		{
			cin >> v[n];
		}

		int cont = 0, act = 0;
		for (int i = 0; i < v.size(); i++)
		{
			if (act > 0)
				cont++;

			if (act > v[i])
				act--;
			else
			{
				act = v[i];
			}
		}
		cout << cont << '\n';

		cin >> n;
	}
}