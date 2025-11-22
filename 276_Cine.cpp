// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using lli = long long int;

int main()
{
	int casos;
	cin >> casos;
	while(casos) {
		vector<pair<lli, lli>>v(casos);
		for(auto &x:v) {
			lli horas, mins, dur;
			char c;
			cin >> horas >> c >> mins >> dur;
			lli timestamp = horas*60+mins;
			x.first = timestamp;
			x.second = timestamp + dur;
		}
		
		sort(v.begin(), v.end());
		lli sol = 0, fin = -10;
		for(auto &x:v) {
			if(x.first >= fin+10) {
				sol++;
				fin = x.second;
			}
			else {
				fin = min(fin, x.second);
			}
		}
		
		cout << sol << '\n';
		
		cin >> casos;
	}
}