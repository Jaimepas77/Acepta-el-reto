#include <iostream>

using namespace std;

int main() {
	int c;
	cin >> c;
	while(c--) {
		int l;
		cin >> l;
		int acum = 0, max = -1;
		int ini = 0, fin = 0;
		int iniTmp = 0;
		int aux;
		for(int i = 0; i < l; i++) {
			cin >> aux;
			if(aux != 0) {
				acum++;
				if(acum > max) {
					max = acum;
					ini = iniTmp;
					fin = i;
				}
			}
			else {
				acum = 0;
				iniTmp = i+1;
			}
		}

		if(max == -1)
			cout << "SIGUE BUSCANDO";
		else
			cout << max << " -> [" << ini << "," << fin << "]";
		cout << '\n';
	}
}