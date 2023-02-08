// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main(){
	int ini, fin;
	cin >> ini;
	while(cin)
	{
		cin>>fin;
		if((fin-ini)%10 == 9)
			cout << "FELIZ DECADA NUEVA\n";
		else
			cout << "TOCA ESPERAR\n";
		
		cin>>ini;
	}
}