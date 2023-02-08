// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

typedef long long int lli;

int main()
{
	int casos;
	cin >> casos;
	while (casos--)
	{
		vector<int>v1, v2;
		char c;
		for (int i = 0; i < 7; i++)
		{
			cin >> c;
			v1.push_back(c - '0');
		}
		for (int i = 0; i < 7; i++)
		{
			cin >> c;
			v2.push_back(c - '0');
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		bool iguales = true;
		for (int i = 0; i < 7 && iguales; i++)
		{
			if (v1[i] != v2[i])
				iguales = false;
		}
		if (iguales)
			cout << "GANA\n";
		else
			cout << "PIERDE\n";
	}
}