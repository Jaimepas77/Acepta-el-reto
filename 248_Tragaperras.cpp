// Usuario de Acepta el reto: jjjjjjjp022
//Jaime P.
#include <iostream>

using namespace std;

int main()
{
	long long int casos;
	cin >> casos;
	while (casos != 0)
	{
		long long int tmp, sumIni = 0, sumAct = 0, sumIniTop = 0, sumActTop = 0;//Tratar suma maxima contando el principio y suma maxima en general
		for (long long int i = 0; i < casos; i++)
		{
			cin >> tmp;
			if (sumAct + tmp > 0)
			{
				sumAct += tmp;
			}
			else
				sumAct = 0;

			sumIni += tmp;

			//Guardar máximos
			if (sumIni > sumIniTop)
				sumIniTop = sumIni;
			if (sumAct > sumActTop)
				sumActTop = sumAct;
		}

		if (sumAct + sumIniTop > sumActTop)
			sumActTop = sumAct + sumIniTop;

		cout << sumActTop << endl;

		cin >> casos;
	}
}