// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;

bool mitad(const vector<lli> &v, lli objetivo, int ind) {
	for(unsigned int i = ind; i < v.size(); i++) {
		if(v[i] == objetivo)
			return true;
		else if(v[i] < objetivo) {
			if(mitad(v, objetivo-v[i], i+1))
				return true;
		}
	}
	return false;
}

int main() {
	lli z;
	cin >> z;
	while(z!=0) {
		vector<lli>v(z);
		lli acum = 0;
		for(auto& x:v) {
			cin >> x;
			acum += x;
		}
		if(mitad(v, acum/2, 0)) {
			cout << "SI\n";
		}
		else {
			cout << "NO\n";
		}
		
		cin >> z;
	}
}