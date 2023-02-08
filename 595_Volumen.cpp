// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <string>

using namespace std;

int main()
{
 	 int n;
 	 cin >> n;
 	 string a;
  	while(n--)
  	{
 	     cin >> a;
  		a.resize(a.size()-2);
	 	   cout << a << "\n";
	  }
}