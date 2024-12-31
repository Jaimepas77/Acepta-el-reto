#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using lli = long long int;

int main()
{
	int l, n;
	cin >> l >> n;
	while(l != 0) {
		vector<int> v(n);
		for(auto &x:v)
			cin >> x;
		
		lli ret = 0;
		bool sol = true;
		for(auto &x:v) {
			int tmp;
			cin >> tmp;
			if(tmp < x) {
				x = tmp;
			}
			else if (tmp > x) {
				sol = false;
			}
			ret += x;
		}
		
		if(ret <= l && sol)
			cout << "SI\n";
		else
			cout << "NO\n";
		
		cin >> l >> n;
	}
}