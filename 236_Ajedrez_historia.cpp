// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;

int main(){
	ulli ini, por, casillas;//Lectura
	cin >> ini >> por >> casillas;
	while(ini!=0 || por != 0 || casillas != 0)
	{
		ulli glob = ini;
		
		for(int i = 1; i < casillas; i++)
		{
			ini *= por;
			glob += ini;
		}
		
		cout << glob << "\n";
		
		cin >> ini >> por >> casillas;
	}
}