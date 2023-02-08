#include <iostream>

using namespace std;

using lli = long long int;

void parseo(const string &s, int &a, int &b, int &c) {
	a = 0;
	b = 0;
	c = 0;
	int i = 0;
	while(s[i] != '.') {
		a = (s[i]-'0') + a*10;
		i++;
	}
	i++;
	
	while(s[i] != '.') {
		b = (s[i]-'0') + b*10;
		i++;
	}
	i++;
	
	while(i < s.size()) {
		c = (s[i]-'0') + c*10;
		i++;
	}
}

int  main() {
	int n;
	cin >> n;
	while(n--) {
		string s;
		cin >> s;
		int a1, b1, c1;
		parseo(s, a1, b1, c1);
		
		cin >> s;
		int a2, b2, c2;
		parseo(s, a2, b2, c2);
		// cout << a << 'x' << b << 'x' << c << '\n';
		
		bool es = false;
		if (a1 == a2-1 && b2 == 0 && c2 == 0)
			es = true;
		else if (a1 == a2)
		{
			if(b1 == b2-1 && c2 == 0)
				es = true;
			else if (b1 == b2){
				if(c1 == c2-1)
					es = true;
			}
		}
		
		if(es)
			cout << "SI\n";
		else
			cout << "NO\n";
	}
}