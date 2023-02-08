#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int cont= 0, racha = 0;
		string all;
		cin >> all;
		for(const auto &x: all)
		{
			if(x == 'O')
			{
				cont += 10 + 10*racha;
				racha++;
			}
			else
			{
				racha = 0;
			}
		}
		
		cout << cont << '\n';
	}
	
}