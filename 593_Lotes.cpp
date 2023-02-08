// Usuario de Acepta el reto: jjjjjjjp022
// 593_AceptaelReto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using lli = long long int;
using namespace std;

bool procedimiento(const string& tests, lli ini, lli fin, lli &acum)
{
	if (ini == fin - 1)
	{
		if (tests[ini] == '1')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (ini > fin - 1)
	{
		return false;
	}
	else
	{
		lli medio = (ini+fin )/ 2 + (ini+fin) % 2;
		//cout << ini << ' ' << medio << ' ' << fin << endl;
		bool prim = procedimiento(tests, ini, medio, acum);
		bool seg = procedimiento(tests, medio, fin, acum);
		if (prim || seg)
			acum+=2;

		return prim || seg;
	}

	return acum;
}

int main()
{
	lli n;
	cin >> n;
	while (n)
	{
		string tests;
		cin >> tests;
		lli ini = 0, fin = tests.size(), acum = 1;
		procedimiento(tests, ini, fin, acum);
		cout << acum << '\n';

		cin >> n;
	}
}