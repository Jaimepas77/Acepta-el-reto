#include <iostream>

using namespace std;
using lli = long long int;

int main() {
	lli n;
	cin >> n;
	while(n != 0)
	{
		lli act, next;
		cin >> act;
		cin >> next;
		bool dir = true;
		bool Dalton = true;
		if(next < act) {
			dir = false;
		}
		else if (next > act) {
			dir=true;
		}
		else {
			Dalton = false;
		}
		
		
		act=next;
		for(lli i = 2; i < n; i++) {
			cin >> next;
			if (next <= act && dir || next >= act && !dir)
				Dalton = false;
			
			act = next;
		}
		
		if(Dalton)
			cout << "DALTON\n";
		else
			cout << "DESCONOCIDOS\n";
		
		cin >> n;
	}
}