// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main(){
	string ini;
	cin >> ini;
	while(cin)
	{
		for (int i = 0; i < ini.length()-1;i++)
			cout << ini[i] << 0;
		cout << ini[ini.length()-1] << endl;
		
		cin>>ini;
	}
}