// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
	string all;
	cin >> all;
	while(cin)
	{
		int i = 1;
		while(i < all.length())
		{
			char aux;
			if((all[i-1]-'0')*10 + (all[i]-'0') >= 32)
			{
				aux = (all[i-1]-'0')*10 + (all[i]-'0');
				i+=2;
			}
			else
			{
				aux = (all[i-1]-'0')*100 + (all[i]-'0')*10 + (all[i+1]-'0');
				i+=3;
			}
			
			cout << aux;
		}
		
		cout << endl;
		
		cin >> all;
	}
}