#include <iostream>

using namespace std;
using lli = long long int;

const int MAX = 1000000000;

void reverse(lli num, lli &ret) {
	ret = 0;
	while(num>0) {
		ret *= 10;
		ret += num%10;
		num /= 10;
	}
}

int main() {
	int n;
	cin >> n;
	while(n--) {
		lli a, b;
		cin >> a;

		lli it = 1;
		reverse(a, b);
		a+=b;
		reverse(a, b);
		while(a <= MAX && b <= MAX) {
			if(a == b)
				break;
			a += b;
			reverse(a, b);
			it++;
		}
		
		if(a <= MAX && b <= MAX)
			cout << it << ' ' << b << '\n';
		else
			cout << "Lychrel?\n";
	}
}