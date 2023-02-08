// #include <iostream>
#include <stdio.h>
// #include <algorithm>

// using namespace std;

int main() {
	int a, b;
	// cin >> a >> b;
	scanf("%d", &a);
	while(a > 0) {
		scanf("%d", &b);
		if(a > b) {
			int aux = a;
			a = b;
			b = aux;
			// swap(a, b);
		}
		
		// cout << min(b-a, a+99-b) << '\n';
		int solA = a-b+99;
		int solB = b-a;
		if(solA > solB)
			printf("%d\n", solB);
		else
			printf("%d\n", solA);
		// printf("%hd\n", min(b-a, a+99-b));
		
		// cin >> a >> b;
		scanf("%d", &a);
	}
}