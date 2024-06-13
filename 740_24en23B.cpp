// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <set>

using namespace std;
using lli = long long int;

set<lli> addSumas(lli x) {
	set<lli> sol;
	lli diez = 10;
	while(x/diez > 0) {
		//Sumando
		set<lli>tmp = addSumas(x/diez);
		for(auto &y:tmp)
			sol.insert(y+x%diez);
		diez*=10;
	}
	sol.insert(x);
	return sol;
}

int main() {
	lli z;
	cin >> z;
	while(z--) {
		set<lli> sol;
		lli aux;
		cin >> aux;
		
		sol = addSumas(aux);
		
		cout << *sol.begin();
		lli i = 0;
		for(auto &x:sol) {
			if(i > 0)
				cout << ' ' << x;
			i++;
		}
		cout << '\n';
	}
}