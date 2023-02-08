#include <iostream>

//using lli = long long int;
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n!= 0) 
	{
		int min = -1, aux, max = -1;
		int ret = 1;
		//Se lee el primero
		cin >> aux;
		min = aux;
		max = aux;
		for(int i = 2; i <= n; i++)//Se lee desde el segundo hasta el final
		{
			cin >> aux;
			
			if(aux > max)
				max = aux;
			
			if(aux <= min)//Todo el que sea menor o igual al niño es también niño
			{
				ret = i;
				min = max;
			}
		}
		
		cout << ret << '\n';
		
		cin >> n;
	}
}