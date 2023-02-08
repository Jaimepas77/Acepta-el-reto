// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

using lli = long long int;

int countCeros(lli n) {
	lli ret = 0;
	while(n%10 == 0 && n>=10) {
		n/=10;
		ret++;
	}
	return ret;
}

lli ceros(lli num) {
	lli ret = 0;
	while(num > 0) {
		ret += num/5;
		num/=5;
	}
	return ret;
}


int  main() {
	lli d, n;
	// cin >> d >> n;
	scanf("%lld %lld", &d, &n);
	while(d != 0 || n != 0) {
		bool f = false;//Found
		lli ini = 0, fin = 10000000000000;
		lli med;
		while(!f && fin >= ini) {
			med = (ini+fin)/2;
			// cout << ini << ' '<<med << ' ' << fin << endl;
			if(med == ini || fin == med) break;
			lli r = ceros(med);
			if(r > n) {
				fin = med;
			}
			else if( r< n) {
				ini = med;
			}
			else {
				f = true;
			}
		}
		
		lli num = -1;
		for(lli i = max((lli)1, med-5); i < med+5; i++) {
			// cout  << "Ceros de " << i << ": " << ceros(i) << '\n';
			if(i%d == 0 && ceros(i) == n) {
				num = i;
				break;
			}
		}
		
		if(num < 0) {
			// cout << "NINGUNO\n";
			printf("NINGUNO\n");
		}
		else {
			// cout << num << '\n';
			printf("%lld\n", num);
		}
		
		// cin >> d >> n;
		scanf("%lld %lld", &d, &n);
	}
}