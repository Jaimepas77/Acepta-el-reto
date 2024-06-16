// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;
using lli = long long int;

int main() {
	lli z;
	cin >> z;
	while(cin) {
		lli sol = 0;
		lli act;
		cin >> act;
		lli last = 0;
		while(act != 0) {
			if(act > last) {
				sol++;
				last = act + z;
			}
			
			cin >> act;
		}
		
		cout << sol << '\n';
		
		cin >> z;
	}
}