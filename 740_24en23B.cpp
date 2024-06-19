// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <set>

using namespace std;

set<int> addSumas(int x) {
	set<int> sol;
	int diez = 10; //Potencia de diez que determina por dónde se divide el número
	while(x/diez > 0) {
		//Sumando en el lugar dividido
		set<int>tmp = addSumas(x/diez);
		for(auto &y:tmp)
			sol.insert(y+x%diez);
		diez*=10;
	}
	sol.insert(x); //Sin sumar en ningún lugar
	return sol;
}

int main() {
	int z;
	cin >> z;
	while(z--) {
		//Entrada
		set<int> sol;
		int act;
		cin >> act;
		
		//Solución
		sol = addSumas(act);
		
		//Salida
		cout << *sol.begin();
		int i = 0;
		for(auto &x:sol) {
			if(i > 0)
				cout << ' ' << x;
			i++;
		}
		cout << '\n';
	}
}