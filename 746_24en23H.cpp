// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <unordered_map>

using namespace std;
using lli = int;

int main() {
	lli a, b;
	cin >> a >> b;
	while(a != 0) {
		lli sol = 0, aux;
		unordered_map<lli, lli>guir;
		for(lli i = 0; i < a; i++) {
			cin >> aux;
			if(guir[aux] > 0) {
				sol++;
				guir[aux]--;
				if(guir[aux] == 0)
					guir.erase(aux);
			}
			else {
				guir[b-aux]++;
			}
		}
		
		cout << sol << '\n';
		
		cin >> a >> b;
	}
}