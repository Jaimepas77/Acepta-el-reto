// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;

int main() {
	int z;
	cin >> z;
	while(cin) {
		vector<int>v(16);
		v[0] = z;
		for(int i = 1; i < 16; i++)
			cin >> v[i];
		
		int paridad = 0;
		for(int j = 0; j < 16; j++) {
			int act = v[j];
			for(int k = j+1; k < 16; k++) {
				int otro = v[k];
				if(otro < act)
					paridad++;
			}
		}
		
		if(paridad%2 == 0)
			cout << "SI\n";
		else
			cout << "NO\n";
		
		cin >> z;
	}
}