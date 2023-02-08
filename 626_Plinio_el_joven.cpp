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
	while (n--)
	{
		char c;
		int d, m, a, sol;
		cin >> d >> c >> m >> c >> a;
		if (((d < 29 && m == 2) || m < 2) && a % 4 == 0)
		{
			sol = a;
		}
		else
		{
			sol = a + (4 - a % 4);
		}
		cout << "29/02/";
		if (sol < 1000)
			cout << "0";
		if (sol < 100)
			cout << "0";
		cout << sol << '\n';
	}
}