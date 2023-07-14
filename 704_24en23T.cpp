// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int w, h;
		cin >> w >> h;
		
		int c;
		cin >> c;
		int pMax = 0, sMax = 0;
		while(c--) {
			int aux;
			cin >> aux;
			if(aux > pMax) {
				sMax = pMax;
				pMax = aux;
			}
			else if(aux > sMax) {
				sMax = aux;
			}
		}
		
		if(pMax >= max(w, h)*2 && sMax >= min(w, h)*2)
			cout << "SI\n";
		else
			cout << "NO\n";
	}
}