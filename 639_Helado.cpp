#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using lli = long long int;

lli diferencia(const int& uno, const int& dos, const int& tres)
{
	return max({ uno, dos, tres }) - min({ uno, dos, tres });
}

int main()
{
	lli n;
	cin >> n;
	while (cin)
	{
		vector<int>v;
		//v.push_back(0);
		//Ventana adaptable

		lli dif = -1;
		lli sep1 = 0, sep2 = 0;
		lli ventana1 = 0, ventana2 = 0, ventana3 = 0;
		for (lli i = 0; i < n; i++)
		{
			lli aux;
			cin >> aux;
			v.push_back(aux);

			ventana3 += aux;
			dif = diferencia(ventana1, ventana2, ventana3);
			while ((sep2 <= i && dif >= diferencia(ventana1, ventana2 + v[sep2], ventana3 - v[sep2]))
				|| (sep1 < sep2 && dif >= diferencia(ventana1 + v[sep1], ventana2 - v[sep1], ventana3))
				|| (sep1 < sep2 && sep2 <= i && dif >= diferencia(ventana1 + v[sep1], ventana2 - v[sep1] + v[sep2], ventana3 - v[sep2])))
			{
				if (sep2 <= i && dif >= diferencia(ventana1, ventana2 + v[sep2], ventana3 - v[sep2]))
				{
					ventana2 += v[sep2];
					ventana3 -= v[sep2];
					sep2++;
					dif = diferencia(ventana1, ventana2, ventana3);
				}
				else if(sep1 < sep2 && dif >= diferencia(ventana1 + v[sep1], ventana2 - v[sep1], ventana3))
				{
					ventana1 += v[sep1];
					ventana2 -= v[sep1];
					sep1++;
					dif = diferencia(ventana1, ventana2, ventana3);
				}
				else
				{
					ventana1 += v[sep1];
					ventana2 -= v[sep1];
					sep1++;
					ventana2 += v[sep2];
					ventana3 -= v[sep2];
					sep2++;
					dif = diferencia(ventana1, ventana2, ventana3);
				}
			}
		}

		cout << dif << '\n';

		cin >> n;
	}
}