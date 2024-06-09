#include <iostream>

using namespace std;
using lli = long long int;
int main() {
	int c;
	cin >> c;
	while(c--) {
		lli a;
		cin >> a;
		lli cont = 0;
		while(a!=0) {
			if(a%2==1)
				cont++;
			a/=2;
		}
		cout << cont << '\n';
	}
}