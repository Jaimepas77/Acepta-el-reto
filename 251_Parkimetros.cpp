#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using lli = long long int;

int main() {
	int casos;
	cin >> casos;
	while(casos--) {
		lli n, r;
		cin >> n >> r;
		vector<lli>moneda(n);
		for(auto &x:moneda)
			cin >> x;
		sort(moneda.begin(), moneda.end());
		
		lli top = moneda[moneda.size()-1];
		
		//Generar vector (PD) que va de precios
		vector<lli>v(top*r+1, r+1);
		
		lli sol = 0;
		v[0] = 0;
		for(lli i = 1; i < v.size(); i++) {
			for(lli j = 0; j < moneda.size(); j++) {
				if(i - moneda[j] >= 0 && v[i-moneda[j]] < r)
					v[i] = min(v[i-moneda[j]]+1, v[i]);
			}
			
			if(v[i] <= r)
				sol++;
		}
		
		cout << sol << '\n';
	}
}