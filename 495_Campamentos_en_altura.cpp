// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;
using lli = long long;

int main() {
	int n;
	// cin >> n;
	while(scanf("%d", &n) != EOF) {
		//Alturas
		vector<lli> altura(n);
		for(auto &x : altura) {
			// cin >> x;
			scanf("%lld", &x);
		}
		
		//Costes
		vector<lli> coste(n);
		for(auto &x : coste){
			// cin >> x;
			scanf("%lld", &x);
		}
		
		//Desnivel máximo
		int desMax;
		// cin >> desMax;
		scanf("%d", &desMax);
		
		//Solución: coste mínimo
		vector<lli> sol(n, -1);
		sol[0] = coste[0];
		for(int i = 1; i < n; i++) {
			//Coger el mínimo entre los anteriores posibles
			if(altura[i] - altura[i-1] <= desMax){
				sol[i] = sol[i-1] + coste[i];
			}
			else {
				sol[i] = -1;
			}
			
			if(altura[i] <= desMax && (sol[i] == -1 || sol[i] > coste[i])) {
				sol[i] = coste[i];
			}
			
			for(int j = i-2; j >= 0 && altura[i] - altura[j] <= desMax; j--) {
				if(sol[j] != -1) {
					sol[i] = min(sol[i], sol[j] + coste[i]);
				}
			}
		}
		
		// cout << sol[n-1] << '\n';
		printf("%lld\n", sol[n-1]);
		
		// cin >> n;
	}
}