#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

using lli = long long int;

int main()
{
	lli z;
	cin >> z;
	while(z != 0) {
		lli sol = 1;
		while(z != 0) {
			lli tmp;
			cin >> tmp;
			sol = max(sol, tmp+z);
			
			z = tmp;
		}
		
		cout << sol << '\n';
		
		cin >> z;
	}
}