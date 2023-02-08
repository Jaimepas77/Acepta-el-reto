// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;

bool dentro(const vector <vector<char>> &v, int fila, int columna)
{
	return fila >= 0 && columna >= 0 && fila < v.size() && columna < v[0].size();
}

bool cubo(vector <vector<char>> &v, int fila, int columna)
{
	bool ret = false;
	
	int f = fila-1, c = columna;
	if(dentro(v, f, c) && !ret)
	{
		if(v[f][c] == '.')
		{
			v[f][c] = 'S';
			ret = cubo(v, f, c);
		}
		else if(v[f][c] == 'F')
			return true;
	}
	
	f = fila + 1;
	if(dentro(v, f, c) && !ret)
	{
		if(v[f][c] == '.')
		{
			v[f][c] = 'S';
			ret = cubo(v, f, c);
		}
		else if(v[f][c] == 'F')
			return true;
	}
	
	f = fila;
	c = columna - 1;
	if(dentro(v, f, c) && !ret)
	{
		if(v[f][c] == '.')
		{
			v[f][c] = 'S';
			ret = cubo(v, f, c);
		}
		else if(v[f][c] == 'F')
			return true;
	}
	
	c = columna + 1;
	if(dentro(v, f, c) && !ret)
	{
		if(v[f][c] == '.')
		{
			v[f][c] = 'S';
			ret = cubo(v, f, c);
		}
		else if(v[f][c] == 'F')
			return true;
	}
	
	return ret;
}

int main()
{
	int fila, columna, fIni, cIni;//fila y columna inicial tmbn
	cin >> fila;
	while(cin)
	{
		cin>> columna;
		
		vector <vector<char>> v(fila);
		
		for(int i = 0; i < fila; i++)//Lectura
		{
			for(int j = 0; j < columna;j++)
			{
				char aux;
				cin >> aux;
				v[i].push_back(aux);
				if(aux == 'S')
				{
					fIni = i;
					cIni = j;
				}
			}
		}
		
		if(cubo(v, fIni, cIni))
			cout << "SI\n";
		else
			cout << "NO\n";
		
		cin>>fila;
	}
}