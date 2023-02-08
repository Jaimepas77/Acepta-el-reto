// #include <iostream>
#include <stdio.h>

// using lli = long long int;
// using namespace std;

int main(){
	long long int n;
	// cin >> n;
	scanf("%lld", &n);
	while(n != 0) 
	{
		double aux;
		long long int menor = 0, mayor = 0, igual = 0, total = 0;
		while(n--)
		{
			// cin >> aux;
			scanf("%lf", &aux);
			if(aux < 1 && aux > 0) {
				total += menor + igual;
				// cout << menor + igual << " ";
				menor++;
			}
			else if(aux > 1){// || aux < 0) {
				total += mayor + igual;
				// cout << mayor + igual << " ";
				mayor++;
			}
			else {
				total += mayor + menor + igual;
				// cout << mayor + menor + igual << " ";
				igual++;
			}
		}
		
		// cout << total << '\n';
		printf("%lld\n", total);
		
		// cin >> n;
		scanf("%lld", &n);
	}
}