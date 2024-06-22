// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <unordered_map>

using namespace std;
using lli = long long int;

int main() {
	lli z;
	cin >> z;
	while(z != 0) {
		unordered_map<string, lli>m;
		
		while(z--) {
			string persona;
			cin >> persona;
			if(persona == "?") {
				lli out = 0, num;
				cin >> num;
				while(num--) {
					cin >> persona;
					out += m[persona];
					m.erase(persona);
				}
				cout << out << '\n';
			}
			else {
				lli aux;
				cin >> aux;
				m[persona] += aux;
			}
		}
		cout << "---\n";
		
		cin >> z;
	}
}