#include <iostream>
#include <vector>

using lli = long long int;
using namespace std;
vector<int>mes = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
vector<int>mesB = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
lli anio = 365;
lli anioB = 366;
lli cuatri = anio*3 + anioB;

bool pregunta(int iniMes, int iniAnio, int n) {
	n = n%cuatri;
	bool ret = false, fin = false;
	for (int i = 0; i < 4 && !fin; i++) {
		for(int j = 0; j < 12; j++) {
			if (n == 0) ret = true;
			if((i+iniAnio)%4 <= 2) {//Normal
				n -= mes[(j + iniMes)%12];
			}
			else { //Bisiesto
				n -= mesB[(j + iniMes)%12];
			}
			if(n == 0) ret = true;
		}
	}
	return ret;
}

int main() {
	lli n;
	cin >> n;
	while(n) {
		
		bool ret = false;
		for (int i = 0; i < 4 && !ret; i++) {
			for(int j = 0; j < 12 && !ret; j++) {
				if(pregunta(j, i, n))
					ret = true;
			}
		}
		
		if(ret)
			cout << "SI\n";
		else
			cout << "NO\n";
		
		cin >> n;
	}
}