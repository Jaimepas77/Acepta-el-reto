// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <utility>

using namespace std;

typedef long long int lli;

struct fecha
{
	lli d = 0, m = 0, a = -1;
};

lli mesToDias(lli mes, bool bisiesto)
{
	lli ret = 0;
	if (mes > 1)
	{
		ret += 31;
		if (mes > 2)
		{
			if (bisiesto)
			{
				ret += 29;
			}
			else
				ret += 28;
			if (mes > 3)
			{
				ret += 31;
				if (mes > 4)
					ret += 30;
				if (mes > 5)
					ret += 31;
				if (mes > 6)
					ret += 30;
				if (mes > 7)
					ret += 31;
				if (mes > 8)
					ret += 31;
				if (mes > 9)
					ret += 30;
				if (mes > 10)
					ret += 31;
				if (mes > 11)
					ret += 30;
				if (mes > 12)
					ret += 300;
			}
		}
	}
	return ret;
}

lli toDias(fecha f)
{
	lli ret = 0;
	ret += f.d;
	//Añadir meses de este año
	ret += mesToDias(f.m, f.a % 4 == 0);
	/*if (f.m > 1)
	{
		ret += 31;
		if (f.m > 2)
		{
			if (f.a % 4 == 0)
			{
				ret += 29;
			}
			else
				ret += 28;
			if (f.m > 3)
			{
				ret += 31;
				if (f.m > 4)
					ret += 30;
				if (f.m > 5)
					ret += 31;
				if (f.m > 6)
					ret += 30;
				if (f.m > 7)
					ret += 31;
				if (f.m > 8)
					ret += 31;
				if (f.m > 9)
					ret += 30;
				if (f.m > 10)
					ret += 31;
				if (f.m > 11)
					ret += 30;
			}
		}
	}
	*/
	//Añadir años pasados
	ret += (f.a) * 365 + (f.a-1) / 4;

	return ret;
}

fecha toFecha(lli dias)
{
	fecha ret;

	ret.a = 0;
	while((ret.a+1) * 365 + (ret.a)/4 < dias)//A lo bruto
	{
		ret.a++;
	}

	ret.m = 1;
	while (mesToDias(ret.m + 1, ret.a % 4 == 0) + (ret.a) * 365 + (ret.a-1) / 4 < dias)
	{
		ret.m++;
	}

	ret.d += dias - (mesToDias(ret.m, ret.a % 4 == 0) + (ret.a) * 365 + (ret.a-1) / 4);

	return ret;
}

void printFecha(fecha f)//Con endl
{
	if (f.d < 10)
		cout << '0';
	cout << f.d << "/";
	if (f.m < 10)
		cout << '0';
	cout << f.m << "/";
	if (f.a < 1000)
		cout << '0';
	if (f.a < 100)
		cout << '0';
	cout << f.a << '\n';
}

int main()
{
	char c;
	fecha nacimiento;
	cin >> nacimiento.d;
	while (nacimiento.d != 0)
	{
		cin >> c >> nacimiento.m >> c >> nacimiento.a;
		lli d, m, a;
		cin >> a >> m >> d;
		
		lli nacDias = toDias(nacimiento);
		nacDias += d + m * 28 + a * 12 * 28;

		fecha sol = toFecha(nacDias);
		printFecha(sol);

		cin >> nacimiento.d;
	}
}