// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;
using lli = long long int;

pair<lli, lli>checkmult(lli z, lli acum) {
	lli sol1 = 1, sol2 = 0;
	while(z != 0) {
		if(z%10 == 0) {
			sol2++;
		}
		else {
			sol1 *= z%10;
		}
		z/=10;
	}
	return {sol1, sol2 + acum};
}

int main() {
	lli z;
	cin >> z;
	while(z != 0) {
		pair<lli, lli> sol = checkmult(z, 0);
		while(sol.first >= 10) {
			sol = checkmult(sol.first, sol.second);
		}
		
		cout << sol.first << sol.second << '\n';
		
		cin >> z;
	}
}