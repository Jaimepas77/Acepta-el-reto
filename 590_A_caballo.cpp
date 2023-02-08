// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

typedef long long int lli;

int main()
{
	lli rac, uvas;
	cin >> rac >> uvas;
	while (rac != 0 || uvas != 0)
	{
		vector <lli> v(rac);

		for (int i = 0; i < rac; i++)//Lectura
		{
			cin >> v[i];
		}

		lli acum = 0, rec = -1;
		bool tonto = false;
		for (lli i = 0; i < v.size() && rec != uvas && !tonto; i++)//Recorrer el viñedo
		{
			acum = 0;
			for (lli j = i; j < v.size() && acum < uvas; j++)
			{
				acum += v[j];
				if (acum >= uvas && (acum < rec || rec == -1))
					rec = acum;
			}
			if (acum < uvas)
				tonto = true;
		}

		if (rec != -1)
			cout << rec << endl;
		else
			cout << "IMPOSIBLE\n";


		cin >> rac >> uvas;
	}
}