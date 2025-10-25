#include <iostream>
#include <vector>
#include <string>

using namespace std;

string limpiar(string &frase) {
	string ret = "";
	for(char &c:frase) {
		if(c != ' ') {
			if(c >= 'a')
				c -= 'a'-'A';
			ret += c;
		}
	}
	return ret;
}

bool palindromo(string &frase, int ini, int fin) {
	if(fin+1-ini <= 1)
		return true;
	else {
		if(frase[ini] != frase[fin]) {
			return false;
		}
		else {
			return palindromo(frase, ini+1, fin-1);
		}
	}
}

int main() {
	string frase;
	getline(cin, frase);
	while(frase != "XXX") {
		frase = limpiar(frase);
		// cout << "Limpia: " << frase << endl;
		
		if(palindromo(frase, 0, frase.size()-1))
			cout << "SI\n";
		else
			cout << "NO\n";
		
		getline(cin, frase);
	}
}