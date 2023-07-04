// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using lli = long long int;

int main() {
	lli money, movs;
	cin >> money;
	while(cin) {
		cin >> movs;
		vector<lli> v(12);
		while(movs--) {
			int aux, mes;
			lli cant;
			char c;
			cin >> aux >> c >> mes >> c >> cant;
			if(c == '+')
				v[mes-1] += cant;
			else
				v[mes-1] -= cant;
			string never;
			getline(cin, never);
		}
		for(int i = 0; i < 11; i++) {
			money += v[i];
			cout << money << ' ';
		}
		cout << money + v[11] << '\n';
		
		cin >> money;
	}
}
//Ambas soluciones funcionan
/*
int main() {
	lli money, movs;
	cin >> money;
	while(cin) {
		cin >> movs;
		vector<pair<pair<lli, lli>, lli>>v(movs);//fecha(mes,día) - cantidad
		for(auto &x:v) {
			char c;
			cin >> x.first.second >> c >> x.first.first;
			cin >> c >> x.second;
			if(c == '-')
				x.second = -x.second;
			string aux;
			getline(cin, aux);
			
			
		}
		
		sort(v.begin(), v.end());
		lli mes = 1;
		for(auto &x:v) {
			//cout << x.first.first << ' ' << x.first.second << ' ' << x.second << '\n';
			while(mes < x.first.first) {
				mes++;
				cout << money << ' ';
			}
			money += x.second;
		}
		while(mes < 12) {
			mes++;
			cout << money << ' ';
		}
		cout << money << '\n';
	
		cin >> money;
	}
}*/