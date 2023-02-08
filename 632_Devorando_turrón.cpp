// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <utility>

using namespace std;

typedef long long int lli;

lli comer(vector<lli> v1, vector <lli> v2, lli time, lli acumA, lli acumB)
{
	if (time <= 0 || ((v1.empty() || v1[v1.size() - 1] > time) && (v2.empty() || v2[v2.size() - 1] > time)))
		return 0;
	else if ((v1.empty() || v1[v1.size() - 1] > time))//si queda en v2 algo que cabe..
	{
		acumB -= v2[v2.size() - 1];
		time -= v2[v2.size() - 1];
		v2.pop_back();
		return comer(v1, v2, time, acumA, acumB) + 1;
	}
	else if ((v2.empty() || v2[v2.size() - 1] > time))//Si queda en v1 algo...
	{
		acumA -= v1[v1.size() - 1];
		time -= v1[v1.size() - 1];
		v1.pop_back();
		return comer(v1, v2, time, acumA, acumB) + 1;
	}
	else
	{
		lli a, b;
		lli tmp = v1.back();
		v1.pop_back();
		time -= tmp;
		acumA -= tmp;
		a = comer(v1, v2, time, acumA, acumB);
		time += tmp;
		acumA += tmp;
		v1.push_back(tmp);
		tmp = v2.back();
		v2.pop_back();
		time -= tmp;
		acumB -= tmp;
		b = comer(v1, v2, time, acumA, acumB);

		return max(a, b) + 1;
	}
}

int main()
{
	lli la, lb;
	lli time;
	cin >> la;
	while (cin)
	{
		cin >> lb >> time;

		lli acumA = 0, acumB = 0;

		vector<lli> v1(la), v2(lb);
		//Resolviendo...
		for (lli i = 0; i < la; i++)
		{
			cin >> v1[i];
			acumA += v1[i];
		}

		for (lli i = 0; i < lb; i++)
		{
			cin >> v2[i];
			acumB += v2[i];
		}

		//Backtracking
		//lli pedazos = comer(v1, v2, time, acumA, acumB);

		//Ventana
		lli ini1 = 0, fin1 = 0, ini2 = 0, fin2 = 0;
		lli acum = 0;
		lli pedazos = 0;
		while (fin1 < v1.size() && fin2 < v2.size())
		{
			if (v1[fin1] < v2[fin2])
			{
				acum += v1[fin1];
				pedazos++;
				fin1++;
			}
			else
			{
				acum += v2[fin2];
				pedazos++;
				fin2++;
			}

			while (acum > time)
			{
				if (ini2 < fin2 && ini1 < fin1)
				{
					if (v1[ini1] > v2[ini2])
					{
						acum -= v1[ini1];
						pedazos--;
						ini1++;
					}
					else
					{
						acum -= v2[ini2];
						pedazos--;
						ini2++;
					}
				}
				else if (ini2 < fin2)
				{

					acum -= v2[ini2];
					pedazos--;
					ini2++;
				}
				else if (ini1 < fin1)
				{

					acum -= v1[ini1];
					pedazos--;
					ini1++;
				}
				else
					cout << "Imposible";
			}
		}

		while (fin1 < v1.size())
		{
			for (int i = ini1; i < fin1; i++)
			{
				pedazos--;
				acum -= v1[i];
			}
			fin1 = v1.size();
			ini1 = fin1;
			/*acum += v1[fin1];
			pedazos++;
			fin1++;
			while (acum > time)
			{
				if (ini2 < fin2 && ini1 < fin1)
				{
					if (v1[ini1] > v2[ini2])
					{
						acum -= v1[ini1];
						pedazos--;
						ini1++;
					}
					else
					{
						acum -= v2[ini2];
						pedazos--;
						ini2++;
					}
				}
				else if (ini2 < fin2)
				{

					acum -= v2[ini2];
					pedazos--;
					ini2++;
				}
				else if (ini1 < fin1)
				{

					acum -= v1[ini1];
					pedazos--;
					ini1++;
				}
				else
					cout << "Imposible";
			}
			*/
		}
		while (fin2 < v2.size())
		{
			for (int i = ini2; i < fin2; i++)
			{
				pedazos--;
				acum -= v2[i];
			}
			fin2 = v2.size();
			ini2 = fin2;
			/*acum += v2[fin2];
			pedazos++;
			fin2++;
			while (acum > time)
			{
				if (ini2 < fin2 && ini1 < fin1)
				{
					if (v1[ini1] > v2[ini2])
					{
						acum -= v1[ini1];
						pedazos--;
						ini1++;
					}
					else
					{
						acum -= v2[ini2];
						pedazos--;
						ini2++;
					}
				}
				else if (ini2 < fin2)
				{

					acum -= v2[ini2];
					pedazos--;
					ini2++;
				}
				else if (ini1 < fin1)
				{

					acum -= v1[ini1];
					pedazos--;
					ini1++;
				}
				else
					cout << "Imposible";
			}
			*/
		}

		while ((ini2 > 0 && acum + v2[ini2 - 1] <= time) || (ini1 > 0 && acum + v1[ini1 - 1] <= time))
		{
			if (ini1 > 0 && (ini2 <= 0 ||  v1[ini1 - 1] < v2[ini2 - 1]))
			{
				acum += v1[ini1 - 1];
				ini1--;
				pedazos++;
			}
			else if (ini2 > 0 && ini1 <= 0 || (v2[ini2 - 1] < v1[ini1 - 1]))
			{
				acum += v2[ini2 - 1];
				ini2--;
				pedazos++;
			}
		}

		cout << pedazos << '\n';

		cin >> la;
	}
}