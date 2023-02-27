// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int e, r;
	cin >> e;
	while(e != 0) {
		cin >> r;
		vector<int> pred(e, -1);//Padre de cada especie
		for(int i = 0; i < r; i++) {
			int o, d;
			cin >> o >> d;
			pred[d-1] = o;
		}
	
		int padre = -1;
		
		bool todas = true;
		vector<bool> visto(e, false);
		for(int i = 1; i <= e && todas; i++) {
			int act = i;
			while(act != padre && !visto[act-1]) {
				visto[act-1] = true;
				if (pred[act-1] != -1) {
					act = pred[act-1];
				}
				else if(pred[act-1] == -1 && padre == -1) {
					padre = act;
				}
				else {
					todas = false;
					break;
				}
			}
		}
		
		if(todas)
			cout << "TODAS\n";
		else
			cout << "FALTA ALGUNA\n";

		cin >> e;
	}
}