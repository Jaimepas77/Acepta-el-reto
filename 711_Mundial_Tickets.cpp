#include <iostream>

using namespace std;
int main() {
	int c;
	cin >> c;
	while(c--) {
		string aux;
		cin >> aux;
		//cout << aux << endl;
		int ret = 0;
		for (int i = 0; i < aux.size(); i++) {
			int tmp;
			if(i%2 == 0) { // impar
				ret += (aux[i]-'0')*3;
				int min = 9;
				for(int j = i+1; j < aux.size(); j++) {
					if(aux[j]-'0' < min)
						min = aux[j]-'0';
				}
				tmp = min;
			}
			else {
				ret += (aux[i]-'0')*2;
				int max = 0;
				for(int j = 0; j < i; j++) {
					if(aux[j]-'0' > max)
						max = aux[j]-'0';
				}
				tmp = max;
			}
			//cout << tmp << '\n';
			ret += tmp;
		}
		
		cout << ret << '\n';
	}
}