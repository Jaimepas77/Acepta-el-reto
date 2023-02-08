// Usuario de Acepta el reto: jjjjjjjp022
#include <stdio.h>
#include <vector>

using namespace std;

int  main() {
	int n;
	// cin >> n;
	while(scanf("%d", &n) != EOF) {
		long long int max = 0;
		long long int acum = 0;
		long long int aux;
		while(n--) {
			// cin >> aux;
			scanf("%lld", &aux);
			acum += aux;
			if(aux > max) max = aux;
		}
		
		if(max <= acum - max) {
			// cout << acum << '\n';
			printf("%lld\n", acum);
		}
		else {
			// cout << max*2 << '\n';
			printf("%lld\n", max*2);
		}
		
		// cin >> n;
	}
}