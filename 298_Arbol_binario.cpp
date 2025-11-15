// Usuario de Acepta el reto: jjjjjjjp022

#include <iostream>
#include <vector>
#include <limits.h>

typedef long long int lli;

using namespace std;

pair<bool, pair<int, int>> resolver() {
	int raiz;
	cin >> raiz;
	if(raiz == -1)
		return {true, {-1, -1}};
	else {
		auto izq = resolver();
		auto dcha = resolver();
		bool ret = izq.first && dcha.first && 
			(izq.second.second < raiz || izq.second.second == -1) && 
			(dcha.second.first > raiz || dcha.second.first == -1);
		
		// cout << "Returning: " << raiz << endl;
		// cout << "Ret: " << ret << endl;
		
		if(izq.second.first == -1)
			izq.second.first = raiz;
		if(dcha.second.second == -1)
			dcha.second.second = raiz;
		
		return {
			ret, 
			{izq.second.first, dcha.second.second}
		};
	}
}

int main() {
	int n;
	cin >> n;
	while(n--) {
		if(resolver().first) {
			cout << "SI\n";
		}
		else
			cout << "NO\n";
	}
}