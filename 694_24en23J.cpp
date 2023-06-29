// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	string aux;
	getline(cin, aux);
	while(n--) {
		string v;
		getline(cin, v);
		
		string ret = "";
		char ant = ' ';
		for(auto &x:v) {
			if(ant == ' ' && x <= 'Z' && x >= 'A')
				ret += x;
			
			ant = x;
		}
		
		cout << ret << '\n';
	}
}