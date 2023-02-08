// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

//HOLA de nuevo :)
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	while(x != 0)
	{
		vector <int> f(y);
		vector <vector<int>> v(x, f);
		for(vector <int>& fila : v)//Lectura de los datos
			for(int &elem : fila)
				cin >> elem;
		
		vector <pair<int, int>> topesF(x);//Máximo y mínimo de cada fila
		for(int i = 0; i < x;++i)
		{
			int max = v[i][0], min = max;
			for(int j = 1; j < y; ++j)//Encontrar máximo y mínimo de la fila
			{
				if(v[i][j] > max)
				{
					max = v[i][j];
				}
				
				if(v[i][j] < min)
				{
					min = v[i][j];
				}
			}
			topesF[i] = {max, min};
		}
		
		vector <pair<int, int>> topesC(y);//Máximo y mínimo de cada columna
		for(int i = 0; i < y;++i)
		{
			int max = v[0][i], min = max;
			for(int j = 1; j < x; ++j)//Encontrar máximo y mínimo de la columna
			{
				if(v[j][i] > max)
				{
					max = v[j][i];
				}
				
				if(v[j][i] < min)
				{
					min = v[j][i];
				}
			}
			topesC[i] = {max, min};
		}
		
		bool encontrado = false;
		for(int i = 0; i < x && !encontrado;++i)//Revisar cada elemento
		{
			for(int j = 0; j < y && !encontrado; ++j)
			{
				if((topesF[i].first == v[i][j] && topesC[j].second == v[i][j]) || (topesF[i].second == v[i][j] && topesC[j].first == v[i][j]))
					encontrado = true;
			}
		}
		
		if(encontrado)
			cout << "SI\n";
		else
			cout << "NO\n";
		
		cin >> x >> y;
	}
}