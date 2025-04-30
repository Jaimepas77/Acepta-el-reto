#include <iostream>

using namespace std;
using lli = long long int;

lli fib(int n) {
	if(n <= 1) {
		return n;
	}
	else {
		lli a1=0, a2=1, act=1;
		for(int i = 2; i <= n; i++) {
			act = a1 + a2;
			a1 = a2;
			a2 = act;
		}
		return act;
	}
}

void print(int n, int tab) {
	for(int i = 0; i < tab; i++) {
		cout << "   ";
	}
	if(n < 0) {
		cout << "\n";
	}
	else {
		cout << fib(n) << '\n';
		if (n > 1) {
			print(n-2, tab+1);
			print(n-1, tab+1);
		}
	}
}

int main() {
	int n;
	cin >> n;
	while(n >= 0) {
		print(n, 0);
		cout << "====\n";
		
		cin >> n;
	}
}