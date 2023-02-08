// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
//#include <vector>

using namespace std;
typedef long long int lli;

int main() {
	int n;
	cin >> n;
	while(n--)
	{
		//vector<lli> v;
		lli aux, max, maxCount = 0, min, minCount = 0;
		cin >> aux;
		max = aux;
		min = aux;
		while(aux != 0)
		{
			if(aux > max)
			{
				max = aux;
				maxCount = 1;
			}
			else if (aux == max)
				maxCount++;

			if(aux < min)
			{
				min = aux;
				minCount = 1;
			}
			else if(aux == min)
				minCount++;

			cin >> aux;
		}

		cout << min << " " << minCount << " " << max << " " << maxCount << '\n';
	}
}