// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using lli = long long int;

int  main() {
	int n;
	cin >> n;
	while(n != 0) {
		vector <pair<int, int>> v(100, {0, 0});//first - cont, second - medida
		// int sol = 0;
		while(n--) {
			int med;
			cin >> med;
			
			v[med-1].first++;
			v[med-1].second = med;
		}
		sort(v.begin(), v.end());
		
		int i = 0, j = 0;
		int sol = 0;
		while(i < v.size() && j < v.size()) {
			while(j < v.size() && v[j].first < 4) {
				j++;
			}
			if(j >= v.size())
				break;
			else {
				v[j].first -= 4;
			}
			
			while(i < v.size() && v[i].first < 2) {
				i++;
			}
			if(i >= v.size())
				break;
			else {
				v[i].first -= 2;
			}
			
			sol++;
		}
		
		cout << sol << '\n';
		
		cin >> n;
	}
}