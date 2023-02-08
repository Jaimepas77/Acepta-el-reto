// Usuario de Acepta el reto: jjjjjjjp022
#include <stdio.h>
#include <math.h>
// #include <stdlib.h>
// #include <set>

// int main(int argc, char* argv[]) {
//     unsigned short int n;
//     scanf("%hd", &n);
//     while(n != 0) {
//         short int present[n+1];
//         // std::set<int> present;
//         unsigned short int i = 1;
//         while(i <= n) {
//             present[i] = 0;
//             // present.insert(i);
//             i++;
//         }
//         unsigned short int aux;
//         i = n;
//         while(i-- > 1) {
//             scanf("%hd", &aux);
//             present[aux] = (short) 1;
//             // present.insert(aux);
//         }
//         // printf("%ld\n", sizeof(present)/sizeof(present[0]));

//         // printf("%d\n", *present.cbegin());
//         aux = 1;
//         // auto it = present.begin();
//         while(aux <= n) {
//             if(present[aux] == (short)0) {
//                 printf("%hd\n", aux);
//                 break;
//             }

//             // auto it = present.find(aux);
//             // if(*it != aux) {
//             //     printf("%d\n", aux);
//             //     break;
//             // }
//             // else {
//             //     present.erase(it);//Probar poniéndolo y quitándolo
//             // }
//             aux++;
//             // it++;
//         }
//         // aux = 1;
//         // while(aux < sizeof(present)/sizeof(present[0])) {
//         //     if(present[aux] == 0) {
//         //         printf("%d\n", aux);
//         //         break;
//         //     }
//         //     aux++;
//         // }

//         scanf("%hd", &n);
//     }
// }
int main(int argc, char* argv[]) {
    int n;
    scanf("%d", &n);
    while(n != 0) {
        int total;
        if(n%2 == 0) {
            total = (n/2)*(n+1);
        }
        else {
            total = ((n+1)/2)*n;
        }
        // total = n*(1+n)/2;
        // (n+n*n)/2
        total = n + n*n;
        total/=2;
        int aux;
        // int i = n;
        while(n-- > 1) {
            scanf("%d", &aux);
            total -= aux;
        }
        // printf("%ld\n", sizeof(present)/sizeof(present[0]));

        printf("%d\n", total);

        scanf("%d", &n);
    }
}