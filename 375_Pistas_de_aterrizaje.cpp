// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
	int num;
	char letra;
	cin >> num;
	while(cin)
	{
		cin.get(letra);
		
		//Tratamiento y escritura del nº
		if(num > 18 & num < 28)
			cout << '0';
		if(num <= 18)
			cout << 18 + num;
		else
			cout << num - 18;
		
		//Tratamiento y escritura de la letra
		if(letra != '\n')
		{
			if(letra == 'L')
				cout << 'R';
			else if (letra == 'R')
				cout << 'L';
			else cout << 'C';
		}
		cout << endl;
		
		cin >> num;
	}
}