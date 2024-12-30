// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;

int main() {
	int z;
	cin >> z;
	while(z--) {
		string e;
		cin >> e;
		if(e.size() == 8)
			cout << "Bien\n";
		else
			cout << "Mal\n";
	}
}