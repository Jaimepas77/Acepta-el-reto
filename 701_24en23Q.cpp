// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using lli = long long int;

int main() {
	lli n;
	cin >> n;//Unidades a comprar
	while(n != 0) {
		lli c;//Bloques
		cin >> c;
		vector<pair<lli, lli>> v(c);
		for(auto &x:v) {
			cin >> x.second >> x.first;
		}
		sort(v.begin(), v.end());
		lli ret = v[c-1].first;
		for(lli i = c-1; i >= 0 && n > 0; i--) {
			//cout << ret << ' ' << n  << ' ' << v[i].second << ' ' << v[i].first<< '\n';
			ret = v[i].first;
			n -= v[i].second;
		}
		cout << ret << '\n';
		
		cin >> n;
	}
}