#include <iostream>
#include <set>

using namespace std;
using lli = long long int;
int main() {
	int c;
	cin >> c;
	while(c!=0) {
		int aux;
		set<int>visited;
		while(c--) {
			cin >> aux;
			if(aux%2==1) aux++;
			visited.insert(aux);
		}
		
		cout << visited.size() << '\n';
		
		cin >> c;
	}
}