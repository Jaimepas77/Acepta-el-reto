// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;
using lli = long long int;

int main() {
	lli z;
	cin >> z;
	while(z != 0) {
		lli i = 0;
		do {
			string sol = "";
			z--;
			sol += (z)%26+'A';
			z = (z)/26;
			while(z > 0) {
				z--;
				char parte = (z)%26+'A';
				
				sol = parte + sol;
				z = (z)/26;
			}
			
			if(i) cout << ' ';
			cout << sol;
			
			cin >> z;
			i++;
		}while(z!=0);
		cout << '\n';
		
		cin >> z;
	}
}