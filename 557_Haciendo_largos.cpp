// Usuario de Acepta el reto: jjjjjjjp022
// #include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
using lli = long long int;

int main() {
    int n;
    // cin >> n;
    scanf("%d", &n);
    while(n--){
        lli largos, tLargo, largoSerie, dBase, dExtra;
        // cin >> largos >> tLargo >> largoSerie >> dBase >> dExtra;
        scanf("%lld %lld %lld %lld %lld", &largos, &tLargo, &largoSerie, &dBase, &dExtra);

        lli total = 0;

        lli entreSeries = max((largos+largoSerie-1) / largoSerie -1, (lli)0);//Nº de descansos entre series
        lli numExtras = (entreSeries-1)*entreSeries/2;//número de veces que se suma el extra (con ayuda de Gauss: 0+1+2+...+(n-1))
        lli extra = numExtras*dExtra;//Tiempo extra total añadido a los descansos
        total = tLargo * largos + entreSeries*dBase + extra;//Pues tiempo de largos + tiempo de descansos base + tiempo de descansos extra

        // cout << total << '\n';
        printf("%lld\n", total);
    }
}