// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;

typedef long long int lli;

int main()
{
	lli all, cars;
	cin >> all;
	while(cin)
	{
		cin>>cars;
		
		lli max=-1;
		vector <pair<lli, lli>> v(cars);//start, speed
		
		for(int i = 0; i < cars; i++)
		{
			cin>>v[i].first>>v[i].second;
			if((max == -1 || all/v[i].second + v[i].first < max) && v[i].first >= 0)
				max = all/v[i].second + v[i].first;
			
			/* if(all/v[i].second + v[i].first < max && v[i].first >= 0)
				max = all/v[i].second + v[i].first; */
		}
		
		cout << max << endl;
		
		cin >> all;
	}
}