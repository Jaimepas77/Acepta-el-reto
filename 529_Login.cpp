// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <utility>

using namespace std;

typedef long long int lli;

int main()
{
	int num;
	cin >> num;
	cin.get();
	for(int i = 0; i < num; i++)
	{
		char log = 'I';
		int max = 0, tmp = 0, min = 0;
		while (log != '\n')
		{
			cin.get(log);
			if(log == 'I')
				tmp++;
			else if(log == 'O')
				tmp--;
			
			if(tmp > max)
				max = tmp;
			
			if(tmp<min)
				min = tmp;
		}
		cout << max - min << endl;
		
	}
}