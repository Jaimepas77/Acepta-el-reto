// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using lli = long long int;

int main() {
	lli n;
	cin >> n;
	while(n != 0) {
		lli momento = -1;
		vector<pair<lli, lli>> v(n);
		for(lli i = 0; i < n; i++) {
			cin >> v[i].first >> v[i].second;
		}
		sort(v.begin(), v.end());
		
		for(lli i = 1; i < n; i++) {
			lli j = i-1;
			if(v[i].first == v[j].first) {
				momento = 0;
			}
			else if(v[i].first > v[j].first) {
				// j --- i
				if(v[i].second < v[j].second) {
					//Calcular momento
					lli d = v[i].first - v[j].first;
					lli rec = v[j].second - v[i].second;
					lli m = d/rec;
					if(momento == -1 || m < momento) {
						momento = m;
					}
				}
			}
			else {// i --- j
				if(v[i].second > v[j].second) {
					//Calcular momento
					lli d = v[j].first - v[i].first;
					lli rec = v[i].second - v[j].second;
					lli m = d/rec;
					if(momento == -1 || m < momento)
						momento = m;
				}
			}
		}
		
		if(momento == -1) {
			cout << "SIN COLISION\n";
		}
		else {
			cout << momento << '\n';
		}
		
		cin >> n;
	}
}