// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

using lli = long long int;

int  main() {
	int n;
	cin >> n;
	while(n != 0) {
		vector <lli> v(10);
		int x = 0;
		while(x <= 9) {
			cin >> v[x];
			x++;
		}
		
		vector <lli> its(10, 0);//Cuantos hay de cada num en el año
		lli act = (n%10);
		its[act]++;
		n /= 10;
		while(n != 0) {
			act = (n%10);
			its[act]++;
			
			n /=10;
		}
		
		x = 0;
		lli min = 0;
		for(int i = 0; i < 10 && min == 0;i++) {
			if(its[i] != 0) {
				min = v[i]/(3*its[i]);
			}
		}
		while(x <= 9) {
			if(its[x] > 0){
				lli tmp = v[x]/(3*its[x]);
				if(tmp < min)
					min = tmp;
			}
			x++;
		}
		
		cout << min << '\n';
		
		cin >> n;
	}
}