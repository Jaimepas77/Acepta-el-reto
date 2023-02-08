// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
	int casos;
	cin >> casos;
	for(int i = 0; i < casos; i++)
	{
		long long int A, S, I;
		cin >> A >> S >> I;
		long long int res = A/S;
		if(A%S < S-I+1 && I != 1)
		    res--;
		
		cout << res << endl;
	}
}