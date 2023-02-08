// Usuario de Acepta el reto: jjjjjjjp022
// #include <iostream>
#include <stdio.h>

using namespace std;
using lli = long long int;

int main() {
    lli a, b;
    // cin >> a >> b;
    scanf("%lld %lld", &b, &a);
    while(a != 0 || b != 0) {
        if(a < b) {//a es el mayor
            lli aux = a;
            a = b;
            b = aux;
        }
        lli count = 0;
        while(a >= 10 && b >= 10) {
            count += a / b;
            lli newA = b;
            b = a%b;
            a = newA;
        }

        // cout << count << '\n';
        printf("%lld\n", count);

        // cin >> a >> b;
        scanf("%lld %lld", &b, &a);
    }
}