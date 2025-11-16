#include <iostream>

using namespace std;
using lli = long long int;

int main() {
	lli n;
	cin >> n;
	while(n--) {
		lli acum = 0;
		lli act;
		string unidad;
		cin >> act;
		while(act != 0) {
			cin >> unidad;
			if(unidad == "da")
				act*=10;
			else if(unidad == "h")
				act*=100;
			else if(unidad == "k")
				act*=1000;
			else if(unidad == "M")
				act*=1000000;
			else if(unidad == "G")
				act*=1000000000;
			
			acum += act;
			
			cin >> act;
		}
		
		string out = "o";
		if(acum%1000000000 == 0) {
			out = "G";
			acum /= 1000000000;
		}
		else if(acum%1000000 == 0) {
			out = "M";
			acum /= 1000000;
		}
		else if(acum%1000 == 0) {
			out = "k";
			acum /= 1000;
		}
		else if(acum%100 == 0) {
			out = "h";
			acum /= 100;
		}
		else if(acum%10 == 0) {
			out = "da";
			acum /= 10;
		}
		cout << acum << ' ' << out << '\n';
	}
}