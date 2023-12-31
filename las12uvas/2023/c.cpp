#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;

int main() {
	int n;
	cin >> n;
	while(n--) {
		string a, b, c;
		cin >> a >> b >> c;
		string f = a + b[0];
		string s = b[1] + c;
		
		string f1 = a + c[0];
		string s1 = c[1] + b;
		
		string f2 = b + a[0];
		string s2 = a[1] + c;
		
		string f3 = b + c[0];
		string s3 = c[1] + a;
		
		string f4 = c + a[0];
		string s4 = a[1] + b;
		
		string f5 = c + b[0];
		string s5 = b[1] + a;
		
		if(f == a || f1 == s1 || f2 == s2 || f3 == s3 || f4 == s4 || f5 == s5)
			cout << "DIVERTIDOS\n";
		else
			cout << "INSULSOS\n";
	}
}