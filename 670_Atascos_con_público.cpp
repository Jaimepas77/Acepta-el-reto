// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

using lli = long long int;

int  main() {
	int n;
	cin >> n;
	while(n--) {
		lli t, esp;//Tramo, epacio
		cin >> t >> esp;
		deque <lli>v;
		for (lli i = 0; i <= esp; i++) {
			v.push_back(0);
		}
		lli aux;
		for (lli i = 0; i < t; i++) {
			cin >> aux;
			v.push_back(max(v.front()+aux, v.back()));
			v.pop_front();
		}
		
		cout << v.back() << '\n';
	}
}