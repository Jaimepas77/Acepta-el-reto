#include <iostream>
#include <math.h>

using namespace std;
using lli = long long int;

int main() {
	int n;
	cin >> n;
	while(n--) {
		lli a;
		cin >> a;
		a*=a;
		lli b = 1, c = 1;
		bool sol = false;
		while(!sol) {
			c = (int) sqrt(a - b*b);
			while(a-b*b > c*c) {
				c++;
			}
			if(a - b*b == c*c || c <= b)
				sol = true;
			else
				b++;
		}
		
		cout << b + c << '\n';
	}
}