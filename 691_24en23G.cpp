// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using lli = long long int;

int main() {
	lli f, a, c;
	cin >> f >> a >> c;
	while(cin) {
		vector<lli> v(a);
		lli aux;
		for(lli i = 0; i < f; i++) {
			cin >> aux;
			if(aux < a)
				v[aux]++;
		}
		
		/*for(auto x:v) {
			cout << x << ' ';
		}
		cout << endl;*/
		lli cont = 0, ret = 0;
		while(cont < a && c > 0) {
			if(c >= v[cont]) {
				ret += v[cont]*(a-cont);
				c -= v[cont];
				cont++;
				v[cont] += v[cont-1];
			}
			else {
				ret += c*(a-cont);
				c = 0;
			}
		}
		
		cout << ret << '\n';
		
		cin >> f >> a >> c;
	}
}

