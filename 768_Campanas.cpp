// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <map>

using namespace std;
using lli = long long int;

int main() {
	string z;
	cin >> z;
	while(cin) {
		map<char, lli>letras;
		for(auto &x:z) {
			letras[x]++;
		}
		
		bool sol = true;
		for(auto &x:letras) {
			if(x.second > z.size()/2+z.size()%2) {
				sol = false;
				break;
			}
		}
		
		if(sol)
			cout << "SI\n";
		else
			cout << "NO\n";
		
		cin >> z;
	}
}