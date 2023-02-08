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
	lli partidos, rondas;
	cin >> partidos >> rondas;
	while (partidos != 0)
	{
		string act, tmp = "";
		cin >> act;

		lli cont = 0;//Partidos jugados

		while (rondas--)
		{
			for (lli i = 0; i < act.size(); i+=2)
			{
				if (act[i] == '1' && act[i + 1] == '1')
				{
					tmp += '1';
					cont++;
				}
				else if (act[i] == '1' || act[i + 1] == '1')
				{
					tmp += '1';
				}
				else
					tmp += '0';
			}
			act = tmp;
			tmp = "";
		}
		cout << cont << '\n';
		cin >> partidos >> rondas;
	}
}