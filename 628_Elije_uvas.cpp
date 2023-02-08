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
	lli sabor, grosor;
	cin >> sabor;
	while (cin)
	{
		cin >> grosor;

		bool act = false;
		lli S = sabor, G = grosor;
		while (sabor != 0 || grosor != 0)
		{
			//Hacer algo
			if (sabor >= S && grosor <= G)
			{
				act = true;
			}
			if (sabor > S)
			{
				S = sabor;
				if (grosor > G)
					act = false;
			}
			if (grosor < G)
			{
				G = grosor;
				if (sabor < S)
					act = false;
			}

			cin >> sabor >> grosor;
		}

		if (act)
		{
			cout << S << " " << G << '\n';
		}
		else
		{
			cout << "NO HAY MEJOR\n";
		}

		cin >> sabor;
	}
}