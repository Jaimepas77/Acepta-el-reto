#include <iostream>
#include <math.h>

using namespace std;
using lli = long long int;

inline lli calcPos(lli &a, lli &b) {
	lli pos = 0;
	lli sup = pow(3, 19);
	
	// cout << "Calculando " << a << ' ' << b << "...\n";
	//Calcular pos1
	while(sup > 1) {
		lli margen = sup/3;
		if(a <  margen) {
			if(b < margen) {
				pos += 1;//Cuadrado1
			}
			else if(b >= margen && b < margen*2) {
				pos += 2;//Cuadrado2
				b -= margen;
				
				a = margen-1 - a;//Invertir a (espejo)
				// cout << "Cuadrado 2\n";
			}
			else {
				pos += 3;//...
				b -= margen*2;
				// cout << "Cuadrado 3\n";
				// cout << "  pos: " << pos << '\n';
			}
		}
		else if(a >= margen && a < margen*2) {
			if(b >= margen*2) {
				pos += 4;
				b -= margen*2;
				a -= margen;
				
				b = margen-1 - b;//Invertir b (espejo)
			}
			else if(b >= margen && b < margen*2) {
				pos += 5;
				b -= margen;
				a -= margen;
				
				a = margen-1 - a;//Invertir a (espejo)
				b = margen-1 - b;//Invertir b (espejo)
				// cout << "Cuadrado 5\n";
				// cout << "  pos: " << pos << '\n';
			}
			else {
				pos += 6;
				a -= margen;
				
				b = margen-1 - b;//Invertir b (espejo)
			}
		}
		else {
			if(b < margen) {
				pos += 7;
				a -= margen*2;
			}
			else if(b >= margen && b < margen*2) {
				pos += 8;
				a -= margen*2;
				b -= margen;
				
				a = margen-1 - a;//Invertir a (espejo)
			}
			else {
				pos += 9;//cuadrado 9
				a -= margen*2;
				b -= margen*2;
			}
		}
		sup/=3;
		if(sup > 1)
			pos = (pos-1) * 9;
	}
	
	return pos;
}

int main() {
	lli n;
	cin >> n;
	while(n--) {
		//En cada iteración nos metemos dentro de uno de esos cuadrados
		///////////////
		// 3 | 4 | 9 //
		//-----------//
		// 2 | 5 | 8 //
		//-----------//
		// 1 | 6 | 7 //
		///////////////
		
		lli a, b, pos1 = 1, pos2 = 1;
		cin >> a >> b;
		pos1 = calcPos(a, b);
		
		cin >> a >> b;
		pos2 = calcPos(a, b);
		
		// cout << "Posiciones: " << pos1 << " - " << pos2 << " = ";
		cout << abs(pos1-pos2) << '\n';
	}
}