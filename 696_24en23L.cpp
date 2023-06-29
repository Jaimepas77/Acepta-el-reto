// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;
using lli = long long int;

int main() {
	lli aux;
	cin >> aux;
	while(cin) {
		lli max = aux, min = aux;
		lli acum = 0;
		while(aux != 0) {
			acum += aux;
			if(min > aux)
				min = aux;
			else if(max < aux)
				max = aux;
			
			cin >> aux;
		}
		
		//lli tot = (max*(max+1) - (min-1)*min)/2;
		lli tot = min;
		for(lli i = min+1; i <= max; i++) {
			tot += i;
		}
		cout << tot - acum << '\n';
	
		cin >> aux;
	}
}