// Usuario de Acepta el reto: jjjjjjjp022
// 214-Acepta_el_reto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	int a, b;
	cin >> a;
	while (a)
	{
		unordered_map<string, int> m;
		while (a--)
		{
			string aux;
			cin >> aux;
			if (m.count(aux) > 0)
			{
				m[aux]++;
			}
			else
			{
				m.insert({ aux, 1 });
			}
		}

		cin >> b;
		while (b--)
		{
			string aux;
			cin >> aux;
			if (m.count(aux) > 0)
			{
				m[aux]++;
			}
			else
			{
				m.insert({ aux, 1 });
			}
			cout << m[aux] << '\n';
		}
		cout << '\n';

		cin >> a;
	}
}