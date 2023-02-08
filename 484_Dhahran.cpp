// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
	string entrada, first = "", second = "";
	cin >> entrada;
	while(cin)
	{
		bool encontrado = false;//Lectura separando las dos mitades
		for(int i = 0; i < entrada.size();i++)
		{
			if(entrada[i] != '.' && !encontrado)
				first += entrada[i];
			else if(entrada[i] == '.')
				encontrado = true;
			else
				second += entrada[i];
		}
		
		string fin1="",fin2="";
		
		encontrado = false;
		for (int i = 0; i < first.length();i++)//Guardado de la primera mitad bien puesta
		{
			if(first[i] != '0')
				encontrado = true;
			if(encontrado)
				fin1 += first[i];
		}
		
		if (!encontrado)
			fin1 = '0';
			
		//cout << '.';//Separación
		
		encontrado = false;
		string acum = "";
		for(int i = 0; i < second.size();i++)//Segunda mitad
		{
			if(second[i] == '0')
			{
				encontrado = true;
				acum += second[i];
			}
			else
			{
				fin2 += acum + second[i];
				acum = "";
			}
		}
		
		cout << fin1;//Escritura del resultado
		if(fin2 != "")
			cout << '.';
		cout << fin2;
		
		cout << endl;
		first = "";
		second = "";
		acum = "";
		
		cin>> entrada;
	}
}