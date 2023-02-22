// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;
using lli = long long int;

lli mcdCalc(const lli &a, const lli &b) { 
	lli num = b;
	lli resto = a%b;
	while(resto != 0) { //Algoritmo de euclides
		lli aux = resto;
		
		resto = num % resto;
		num = aux;
	}
	return num;
}

int main() {
	lli aux;
	cin >> aux;
	while(aux != 0) {
		lli total = aux;
		lli mcd = aux; //MCD de todos
		cin >> aux;
		while(aux != 0) {
			total += aux;
			mcd = mcdCalc(mcd, aux);
			
			cin >> aux;
		}
		
		cout << total / mcd << '\n';
		
		cin >> aux;
	}
}