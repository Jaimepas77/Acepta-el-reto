#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

using lli = long long int;

int main()
{//TODO?
	lli z;
	cin >> z;
	while(z!=0) {
		lli ret = 1;
		lli ant, act, maxim;
		cin >> ant;
		maxim = ant;
		z--;
		while(z--) {
			cin >> act;
			if(act < ant || maxim > act)
				ret = 0;
			else {
				ret++;
			}
			
			maxim = max(maxim, act);
			
			ant = act;
		}
		
		cout << ret << '\n';
		
		cin >> z;
	}
}