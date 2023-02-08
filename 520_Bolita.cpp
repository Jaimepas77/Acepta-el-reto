// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main(){
	int size, pos;
	cin >> size >> pos;
	
	while(size!=0 || pos != 0)
	{
		int uno, dos, place = pos;
		cin >> uno >> dos;
		while(uno !=0 || dos != 0)
		{
			if(place == uno)
				place = dos;
			else if(place == dos)
				place = uno;
			
			cin >> uno >> dos;
		}
		
		//Solución
		cout << place << "\n";
		
		cin >> size >> pos;
	}
}