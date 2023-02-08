// Usuario de Acepta el reto: jjjjjjjp022
#include <stdio.h>

int main(int argc, char* argv[]) {
    unsigned int n;
    scanf("%u", &n);
    while(n--) {
        unsigned short int p;
        scanf("%hu", &p);
        if(p%2==0)  p++;
        else    p--;
        
        printf("%u\n", p);
    }
}