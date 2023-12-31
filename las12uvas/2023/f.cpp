#include <iostream>
#include <vector>

using lli = long long int;
using namespace std;

bool cmpString(const string &ant, const string &act) {//act < ant
	if(act[0] == '-' && ant[0] != '-')
		return true;
	if(ant[0] == '-' && act[0] != '-')
		return false;
	if(act[0] != '-' && ant[0] != '-') {
		if(act.size() < ant.size())
			return true;
		else if(act.size() == ant.size() && act < ant)
			return true;
		else
			return false;
	}
	else if (act[0] == '-' && ant[0] == '-') {
		if(act.size() < ant.size())
			return false;
		else if(act.size() == ant.size() && act < ant)
			return false;
		else
			return true;
	}
}

int main() {
	lli n;
	cin >> n;
	while(cin) {
		string ant, act;
		if(n <= 1) {
			if (n == 1) {
				cin >> act;
			}
			cout << n << '\n';
		}
		else {
			cin >> ant >> act;
			lli ret = n;
			if(cmpString(ant, act))
				ret /= 2;
			lli cont = 2;
			while(cont < n) {
				ant = act;
				cin >> act;
				//cout << "cont: " << cont << endl;
				while(cont > n-ret && cmpString(ant, act)) {
					ret /=2;
					//cout << "ret: " << ret <<endl;
				}
				
				cont++;
			}
			cout << ret << '\n';
		}
		
		cin >> n;
	}
}