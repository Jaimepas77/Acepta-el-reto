// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;

int main() {
	lli n, k;
	cin >> n >> k;
	while(cin) {
		vector<pair<lli, lli>>v(n);
		for(lli i = 0; i < n; i++) {
			cin >> v[i].first;
		}
		for(lli i = 0; i < n; i++) {
			cin >> v[i].second;
		}
		
		vector<lli> ben(n, 0);
		ben[0] = v[0].second;
		lli pre = 0;//Beneficio que tiene el siguiente guardado del ant
		lli pos = -1;//No necesario?
		for(lli i = 1; i < n; i++) {
			while(v[pos+1].first <= v[i].first - k) {
				pos++;
				pre = ben[pos];
			}
			//cout << "Si: " << pre + v[i].second << '\n';
			//cout << "No: " << ben[i-1] << '\n';
			if(pre + v[i].second > ben[i-1]) {//Recoger
				ben[i] = pre+v[i].second;
			}
			else {
				ben[i] = ben[i-1];
			}
		}
		
		cout << ben[n-1] << '\n';
		
		cin >> n >> k;
	}
}