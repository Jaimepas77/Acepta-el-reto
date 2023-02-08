#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	while(n!=0)
	{
		//Lectura//
		vector<int> v(n);
		int total = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
			total += v[i];//Precálculo de la suma total de los valores
		}
		
		//Resolución//
		//Se tiene inicialmente el resultado de no cambiar el bombín (total)
		int prev = 0, post = total;//Empezamos a la izquierda
		int mejor = prev - post, cambio = 0;//Solución
		for(int i = 0; i < v.size()-1; i++)
		{
			prev += v[i];
			post -= v[i];
			int actual = prev - post;
			if(abs(actual) < abs(mejor))
			{
				mejor = actual;
				cambio = i+1;
			}
		}
		
		//Salida//
		cout << cambio << '\n';
		
		cin >> n;
	}
}