// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int a;
		cin >> a;
		int pico = 0, valle = 0;
		if(a >= 3)
		{
			int b, c, d;
			cin >> b >> c >> d;
			for(int i = 3; i < a; i++)
			{
				if(c > d && c > b)
					pico++;
				
				if(c < d && c < b)
					valle++;
				
				b = c;
				c = d;
				cin >> d;
			}
			if(c > d && c > b)
					pico++;
				
			if(c < d && c < b)
					valle++;
		}
		else
		{
			int s;
			for(int i = 0; i < a; i++)
				cin >> s;
		}
		
		cout << pico << " " << valle << '\n';
	}
}