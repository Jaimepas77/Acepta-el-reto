// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long int lli;

int main()
{
	lli casos;
	cin >> casos;
	for(int i = 0; i < casos;i++)
	{
		//Lectura
		lli tam1;
		cin >> tam1;
		vector<lli> v1;//Tamaño máximo de la entrada
		for(lli j = 0; j < tam1;j++)
		{
			lli aux;
			cin >> aux;
			v1.push_back(aux);
		}
		sort(v1.begin(), v1.end());
		
		lli tam2;
		cin >> tam2;
		vector<lli> v2;
		for(lli j = 0; j < tam2;j++)
		{
			lli aux;
			cin >> aux;
			v2.push_back(aux);
		}
		sort(v2.begin(), v2.end());
		
		//Cálculo de la solución
		vector <lli> vz1, vz2;
		vz1.push_back(-1);
		vz2.push_back(-1);
		
		lli j=1, k=1;//Punteros a v1 y v2
		while(j<tam1 && k < tam2)
		{
			if(v1[j] == v2[k])
			{
				j++;
				k++;
			}
			else if(v1[j] > v2[k])
			{
				if(v2[k] == v2[k-1] && v2[k] != v1[j-1] && vz2[vz2.size()-1] != v2[k])
					vz2.push_back(v2[k]);
				k++;
			}
			else
			{
				if(v1[j] == v1[j-1] && v1[j] != v2[k-1] && vz1[vz1.size()-1] != v1[j])
					vz1.push_back(v1[j]);
				j++;
			}
		}
		
		while(j<tam1)
		{
			if(v1[j] == v1[j-1] && vz1[vz1.size()-1] != v1[j])
			{
				if(tam2 == 0)
					vz1.push_back(v1[j]);
				else if(v1[j] != v2[k-1])
					vz1.push_back(v1[j]);
			}
			
			j++;
		}
		
		while(k < tam2)
		{
			if(v2[k] == v2[k-1] && vz2[vz2.size()-1] != v2[k])
			{
				if(tam1==0)
					vz2.push_back(v2[k]);
				else if(v2[k] != v1[j-1])
					vz2.push_back(v2[k]);
			}
			
			k++;
		}
		
		//Imprimir la solución
		if(vz1.size()==1)//V1
			cout << "Nada que intercambiar\n";
		else
		{
			for(lli j = 1; j < vz1.size();j++)
			{
				cout << vz1[j];
				if(j < vz1.size()-1)
					cout << " ";
			}
			cout << endl;
		}
		
		if(vz2.size()==1)//V2
			cout << "Nada que intercambiar\n";
		else
		{
			for(lli j = 1; j < vz2.size();j++)
			{
				cout << vz2[j];
				if(j < vz2.size()-1)
					cout << " ";
			}
			cout << endl;
		}
	}
}