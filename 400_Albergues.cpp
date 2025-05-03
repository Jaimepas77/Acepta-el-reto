// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
    string act;
	while(cin >> act) {
		int sol = 0, racha = 0;
		bool ini = true;
		for(int i = 0; i < act.size(); i++) {
			if(act[i] == '.') {
				racha++;
			}
			else {
				racha--;
				if(!ini) {
					racha /= 2;
				}
				sol = max(sol, racha);
				
				racha = 0;
				ini = false;
			}
		}
		racha--;
		sol = max(sol, racha);
		
		cout << sol << '\n';
	}
}