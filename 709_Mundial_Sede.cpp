#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

int main() {
	short int n;
	cin >> n;
	while(n) {
		map<string, short int>v;
		string aux;
		while(n--) {
			cin >> aux;
			v[aux]++;
		}
		
		short int max = 0;
		for(const auto &x:v) {
			if (x.second > max) {
				max = x.second;
				aux = x.first;
			}
			else if (x.second == max) {
				aux = "EMPATE";
			}
		}
		
		//cout << aux << '\n';
		printf("%s\n", aux.c_str());
		
		cin >> n;
	}
}
