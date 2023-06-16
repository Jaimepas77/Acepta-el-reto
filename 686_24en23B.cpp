// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using lli = long long int;

using namespace std;

lli contar(lli num){
	lli ret = 0;
	while(num != 0) {
		num/=10;
		ret++;
	}
	
	return ret;
}

bool comprobar(lli &a, lli &b) {
	vector<bool> v(10, false);
	while(a != 0) {
		if(v[a%10] == true && a%10 > 0)
			return false;
		
		v[a%10] = true;
		a /= 10;
	}
	
	while(b != 0) {
		if(v[b%10] == true && b%10 > 0)
			return false;
		
		v[b%10] = true;
		b /= 10;
	}
	
	for(int i = 1; i < 10; i++) {
		if(!v[i])
			return false;
	}
	
	return true;
}

int main() {
	lli a, b;
	cin >> a >> b;
	while(a > 0) {
		//Resolver
		lli cont = 0, it = 2;
		lli x = a*it;
		lli y = b*it;
		while(contar(x) + contar(y) <= 9) {
			if(comprobar(x, y))
				cont++;
			
			it++;
			x = a*it;
			y = b*it;
		}
		
		cout << cont << '\n';
		
		cin >> a >> b;
	}
}