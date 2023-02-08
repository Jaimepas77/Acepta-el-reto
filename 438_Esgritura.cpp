// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string all;
	getline(cin, all);
	while(cin)
	{
		int speak = 0, ouh = 0;
		
		for(int i = 0; i < all.length();i++)
		{
			if((all[i] >= 'a' && all[i] <= 'z') || (all[i] >= 'A' && all[i] <= 'Z'))
				speak++;
			
			if(all[i] == '!')
				ouh++;
		}
		
		if(speak < ouh)
			cout << "ESGRITO" << endl;
		else
			cout << "escrito" << endl;
		
		getline(cin, all);
	}
}