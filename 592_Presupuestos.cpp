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
	lli total, gente;
	cin >> total;
	while(cin)
	{
		cin >> gente;
		vector <lli> v(gente);
		
		lli repart = total / gente;
		lli suma = 0;
		for(int i = 0; i < gente;i++)
		{
			cin >> v[i];
			suma += v[i];
		}
		
		sort(v.begin(), v.end());
		
		lli sol = v[v.size()-1];
		for(int i = 0; i < v.size()-1 && suma > total; i++)
		{
			if(suma>total && (v[v.size()-i-1] - v[v.size()-i-2]) * (i+1) <= suma-total)
			{
				suma -= (v[v.size()-i-1] - v[v.size()-i-2])* (i+1);
				sol -= (v[v.size()-i-1] - v[v.size()-i-2]);
			}
			else if(suma>total)
			{
				sol -= (suma-total)/(i+1);
				suma -= (suma-total)/(i+1);
			}
		}
		if(suma > total)
			sol = repart;
		
		cout << sol << endl;
		
		cin >> total;
	}
}