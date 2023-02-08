// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;

bool dentro(int filas, int columnas, int f, int c)
{
	return f>=0 && c>=0 && filas>f && columnas>c;
}

pair <int, int> convert(string word)
{
	if(word == "ARRIBA")
		return {-1,0};
	else if(word == "IZQUIERDA")
		return {0,-1};
	else if(word == "DERECHA")
		return {0,1};
	else if(word == "ABAJO")
		return {1,0};
	else
	{
		cout << "ERROR";
		return {0,0};
	}
}

int main(){
	int filas, columnas;//Lectura
	cin >> filas >> columnas;
	while(filas!=0 || columnas != 0)
	{
		vector <string> v;//Lectura del mapa
		for(int i = 0; i < filas; i++)
		{
			string aux;
			cin >> aux;
			v.push_back(aux);
		}
		
		//Lectura de las consultas
		int n;
		cin >> n;
		while(n--)
		{
			int f, c;
			string dir;
			cin >> f >> c >> dir;//Lectura del caso
			f--;
			c--;
			//bool encontrado = false;
			int n = 0;
			while(dentro(filas, columnas, f+n*convert(dir).first, c+n*convert(dir).second) && v[f+n*convert(dir).first][c+n*convert(dir).second] == '.')
			{
				n++;
			}
			
			if(dentro(filas, columnas, f+n*convert(dir).first, c+n*convert(dir).second))
				cout << n;
			else
				cout << "NINGUNO";
			cout << "\n";
		}
		
		cout << "---\n";
		
		cin >> filas >> columnas;
	}
}