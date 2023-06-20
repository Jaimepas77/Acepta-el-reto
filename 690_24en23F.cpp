// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a;
	while(a != 0) {
		cin >> b;
		int cont = 0;
		while(b--) {
			bool dentro = false;
			string aux;
			cin >> aux;
			for(int i = 0; i < a; i++) {
				if(dentro) {
					if(aux[i] != '.') {
						dentro = false;
					}
					cont++;
				}
				else {
					if(aux[i] != '.') {
						dentro = true;
					}
				}
			}
			
		}
		
		cout << cont << '\n';
		
		cin >> a;
	}
}