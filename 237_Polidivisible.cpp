// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

typedef long long int lli;

int len(lli num) {
	int ret = 0;
	while(num != 0) {
		ret++;
		num /= 10;
	}
	
	return ret;
}

bool soluble(lli num, int l) {
	while(num != 0) {
		if(num % l != 0)
			return false;
		num /= 10;
		l--;
	}
	
	return true;
}

int main(){
	lli num;
	while(cin >> num) {
		if(soluble(num, len(num))) {
			cout << "POLIDIVISIBLE\n";
		}
		else {
			cout << "NO POLIDIVISIBLE\n";
		}
	}
}