// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;

int main() {
	lli a, b;
	cin >> a >> b;
	while(a != 0) {
		vector<lli>v(b);
		for(auto& x:v)
			cin >> x;
		lli sol = -1, posSol = 0;
		lli ini = 0, fin = 0, current = 0;
		for(lli i = 0; i < b; i++) {
			current += v[i];
			while(current - v[ini] >= a) {
				current-=v[ini];
				ini++;
			}
			fin++;
			
			if(current >= a && (fin-ini < sol || sol == -1)) {
				sol = fin - ini;
				posSol = ini+1;
			}
		}
		
		if(sol == -1)
			cout << "NO ENTRAN\n";
		else
			cout << sol << ' ' << posSol << '\n';
		
		cin >> a >> b;
	}
}