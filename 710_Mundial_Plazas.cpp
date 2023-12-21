#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int t;//Total
		cin >> t;
		int a = 6, aux;
		while(a--) {
			cin >> aux;
			t -= aux;//Restar plazas asignadas
		}
		
		cout << t << '\n';
	}
}