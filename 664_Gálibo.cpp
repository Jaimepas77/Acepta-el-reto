// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;

using lli = long long int;

int  main() {
	int n;
	cin >> n;
	while(n != 0) {
		int min = 800;
		while(n--) {
			int l;
			cin >> l;
			int aux;
			int max = 0;
			while(l--) {
				cin >> aux;
				if(aux > max)
					max = aux;
			}
			
			if (max < min)
				min = max;
		}
		cout << min << '\n';
		
		cin >> n;
	}
}