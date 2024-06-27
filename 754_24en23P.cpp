// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;
using lli = long long int;

int main() {
	string z;
	cin >> z;
	while(cin) {
		map<char, int>dic;
		for(auto& x:z) {
			dic[x]++;
		}
		bool posible = true;
		string sol = "";
		char medio = '-';
		for(auto& x:dic) {
			if(medio == '-' && x.second % 2 != 0) {
				medio = x.first;
				x.second--;
			}
			
			if(x.second % 2 == 0) {
				while(x.second) {
					x.second -= 2;
					sol += x.first;
				}
			}
			else {
				posible = false;
				break;
			}
		}
		
		if(posible) {
			cout << sol;
			if(medio != '-')
				cout << medio;
			reverse(sol.begin(), sol.end());
			cout << sol << '\n';
		}
		else
			cout << "NO HAY\n";
		
		cin >> z;
	}
}