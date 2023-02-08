// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

typedef long long int lli;

int main()
{
	int n;
	cin >> n;
	while (n)
	{
		int t = 0, aux;
		for (int i = 0; i < n; i++)
		{
			cin >> aux;
			t += aux;
		}
		int p;
		cin >> p;

		int i;
		for (i = 0; i < 12; i++)
		{
			if ((i + t) / (n + 1) == p && (i + t) % (n + 1) == 0)
				break;
		}
		if (i > 10)
			cout << "IMPOSIBLE";
		else
			cout << i;
		cout << '\n';

		cin >> n;
	}
}