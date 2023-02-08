#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	while(n != 0) {
		bool a = true, b = true;;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				int aux;
				cin >> aux;
				if(i > j && aux != 0)
					a = false;
				else if(i < j && aux != 0)
					b = false;
			}
		}
		
		if(a || b)
			cout << "SI\n";
		else
			cout << "NO\n";
		
		cin >> n;
	}
}