// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef struct
{
	int x, y, size;
}tUmbrella;

int main()
{
	int cases;
	cin >> cases;
	for (int i = 0; i < cases; i++)
	{
		//Reading
		int num;
		cin >> num;
		vector <tUmbrella> v(num);
		for (int i = 0; i < v.size(); i++)
		{
			cin >> v[i].x >> v[i].y >> v[i].size;
		}

		//Solving part
		int counter = 0;
		for(int i = 0; i < v.size(); i++)
			for (int j = i+1; j < v.size(); j++)
			{
				int x = abs(v[i].x - v[j].x);
				int y = abs(v[i].y - v[j].y);
				float distance = sqrt(x * x + y * y);
				if (distance < v[i].size + v[j].size)
					counter++;
			}

		//Output part
		cout << counter << endl;
	}
}