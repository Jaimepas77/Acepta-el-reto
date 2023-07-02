// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;
using lli = long long int;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int t;
		cin >> t;
		lli sum = 0, max = 0;
		for(int i = 0; i < t; i++) {
			for(int j = 0; j < t; j++) {
				int aux;
				cin >> aux;
				sum += aux;
				if(aux > max)
					max = aux;
			}
		}
		
		if(max*2 == sum)
			cout << "SI\n";
		else
			cout << "NO\n";
	}
}