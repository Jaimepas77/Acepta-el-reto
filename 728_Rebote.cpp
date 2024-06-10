#include <iostream>

using namespace std;
using lli = long long int;

int main() {
	lli n;
	cin >> n;
	while(n != 0) {
		bool descenso = false;
		bool ascenso = false;
		lli racha = 1;
		lli max = 0;
		lli prev, act;
		cin >> prev;
		n--;
		while(n--) {
			cin >> act;
			if(act < prev) {
				descenso = true;
				if(ascenso == true)
					racha = 1;
				ascenso = false;
			}
			else
				ascenso = true;
			racha++;
			
			if(descenso && ascenso && max < racha)
				max = racha;
			
			prev = act;
		}
		
		cout << max << '\n';
		
		cin >> n;
	}
}