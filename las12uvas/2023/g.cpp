#include <iostream>
#include <vector>

using lli = long long int;
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		lli aux;
		cin >> aux;
		lli acum = 1;
		lli sum = 2;
		lli cont = 1;
		lli ret = 0;
		while(acum <= aux) {
			ret++;
			cont += sum;
			sum++;
			acum += cont;
		}
		cout << ret << '\n';
	}
}