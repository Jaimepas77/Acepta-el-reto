#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using lli = long long int;

int  main() {
	lli n;
	cin >> n;
	while(n != 0) {
		vector <pair<lli, bool>> v;//Hora y true-llega; false-se va
		lli lleg, sal;
		while(n--) {
			cin >> lleg >> sal;
			v.push_back({lleg, true});
			v.push_back({sal, false});
		}
		
		lli max = -1;
		lli time = 0;
		lli timeIni = 0;
		lli pres = 0;
		sort(v.begin(), v.end());//Ordenar por orden de llegada (algoritmo voraz)
		bool aTope=false;
		for(auto &x:v) {
			// cout << x.first << ' ';
			// if(x.second)
				// cout << 't' << '\n';
			// else
				// cout << 'f' << '\n';
			
			if(aTope && x.second == false) {
				time += x.first - timeIni;
				aTope = false;
			}
			//Update present ppl
			if(x.second) {
				pres++;
			}
			else
				pres--;
			
			//Actualizar max
			if(pres > max) {//New record!!
				max = pres;
				
				time = 0;
				timeIni = x.first;
				aTope = true;
			}
			else if (pres == max) {//Otra vez hay gente!!
				aTope = true;
				timeIni = x.first;
			}
		}
		
		cout << max << ' ' << time << '\n';
		
		cin >> n;
	}
}