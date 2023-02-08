#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	while(n != 0) {
		bool es = true;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				int aux;
				cin >> aux;
				if(i==j && aux != 1)
					es = false;
				else if(i != j && aux != 0)
					es = false;
			}
		}
		
		if(es)
			cout << "SI\n";
		else
			cout << "NO\n";
		
		cin >> n;
	}
}