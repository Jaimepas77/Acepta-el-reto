// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;
using lli = long long int;

lli mcd(lli a, lli b) {
	if(b == 0)
		return a;
	else
		return mcd(b, a%b);
}

lli mcm(lli a, lli b) {
	return a*b/mcd(a, b);
}

int main() {
	lli z;
	cin >> z;
	while(z--) {
		string balas;
		cin >> balas;
		lli unos = 0;
		lli zeros = 0;
		lli sigMal = 0;
		lli sigBien = 0;
		
		for(lli i = 0; i < balas.length(); i++) {
			char act = balas[i];
			char sig = balas[(i+1)%balas.length()];
			if(act == '1')
				unos++;
			else
				zeros++;
			
			if(act == '0') {
				if(sig == '1')
					sigMal++;
				else
					sigBien++;
			}
		}
		
		lli div = mcm(unos+zeros, sigMal+sigBien);
		//cout << "mcm de " << unos+zeros << " y " << sigMal + sigBien << " = " << div << endl;
		
		lli girar = (zeros*div)/(unos+zeros);
		lli noGirar = (sigBien*div)/(sigBien+sigMal);
		
		if(girar > noGirar)
			cout << "Girar\n";
		else if(girar == noGirar)
			cout << "Da igual\n";
		else
			cout << "No girar\n";
	}
}