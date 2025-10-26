// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;

int main()
{
	string jugadas;
	cin >> jugadas;
	while(jugadas != "F") {
		vector<pair<lli, lli>>v(1, {0, 0});
		lli setsA = 0, setsB = 0;
		char saque = 'A';
		for(lli i = 0; i < jugadas.size()-1; i++) {
			lli act = v.size()-1;
			
			if(abs(v[act].first - v[act].second) >= 2 && max(v[act].first, v[act].second) >= 9) {
				v.push_back({0, 0});
				act++;
			}
			if(jugadas[i] == saque) {
				if(jugadas[i] == 'A')
					v[act].first++;
				else
					v[act].second++;
			}
			else {
				if(jugadas[i] == 'A')
					saque = 'A';
				else
					saque = 'B';
			}
		}
		
		cout << v[0].first << "-" << v[0].second;
		for(lli i = 1; i < v.size(); i++) {
			cout << " " << v[i].first << "-" << v[i].second;
		}
		cout << '\n';
		
		cin >> jugadas;
	}
}