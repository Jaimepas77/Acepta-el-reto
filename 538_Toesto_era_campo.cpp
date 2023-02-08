// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main(){
	int abu, igle;//Abuelo, iglesia
	cin >> abu >> igle;
	while(abu!=0 || igle != 0)
	{
		if(igle > abu)
			cout << "SENIL\n";
		else
			cout << "CUERDO\n";
		
		cin>>abu>>igle;
	}
}