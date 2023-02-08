// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main(){
	int ini;
	cin >> ini;
	while(cin)
	{
		int suma = 0, cuatro = 4;
		while(ini != 0)
		{
			suma += ini * cuatro;
			ini = ini/2;
			cuatro *= 4;
		}
		
		cout << suma << endl;
		
		cin>>ini;
	}
}