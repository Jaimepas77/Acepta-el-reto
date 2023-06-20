// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using lli = long long int;
using namespace std;

int main() {
	lli c, m, n;
	cin >> c;
	while(cin) {
		cin >> m >> n;
		bool ok = true;
		
		lli a, b;
		cin >> a;
		cin >> b;
		lli ant = b-a;
		lli max = ant;
		lli min = ant;
		for(lli i = 2; i <= n; i++) {
			a = b;
			cin >> b;
			
			lli huella = b-a;
			if(huella > max)
				max = huella;
			if(huella < min)
				min = huella;
			
			if(abs(huella-ant) > c || max - min > m)
				ok = false;
			
			ant = huella;
		}
		
		if(ok)
			cout << "Ok\n";
		else
			cout << "Tropiezo\n";
		
		cin >> c;
	}
}