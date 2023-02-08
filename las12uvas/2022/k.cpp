#include <iostream>
#include <vector>

using namespace std;

using lli = long long int;

int  main() {
	lli n, c;
	cin >> n >> c;
	while(cin) {
		vector<lli> v(n);
		for(auto &x:v) cin >> x;
		
		lli max = -1;//Peso max
		lli posMax = 0;
		
		lli izq = 0;
		lli dcha = 0;
		lli med = 0;
		
		//Crear ventana
		for(lli i = 0; i < c; i++) {
			dcha += v[i];
			while(izq < dcha) {
				izq += v[med];
				dcha -= v[med];
				med++;
			}
		}
		if(izq == dcha) {
			max = izq;
			posMax = 0;
		}
		
		for (lli i = 0; i < n-c; i++) {//Mover ventana cogiendo max
			izq -= v[i];
			dcha += v[i+c];
			// cout << izq << ' ' << dcha << ' ' << max << '\n';
			
			while(izq < dcha) {//Moverse a dcha
				izq += v[med];
				dcha -= v[med];
				med++;
			}
			// cout << izq << ' ' << dcha << ' ' << max << '\n';

			if(izq == dcha && izq > max) {
				max = izq;
				posMax = i+1;
			}
		}
		
		if(max != -1)
			cout << posMax+1 << '\n';
		else
			cout << "SIN ADORNOS\n";
		
		cin >> n >> c;
	}
}