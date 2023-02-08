// Usuario de Acepta el reto: jjjjjjjp022
#include <stdio.h>
#include <stdlib.h>
#define MILLON 1000000

int main(int atgc, char* argv[]) {
    while(1) {
        int cont = 0;
        int it = 1;

        // char past = ' ';
        // char act;

        // char* word = (char*) malloc(sizeof(char) * (MILLON+1));
        char word[MILLON+1];
        // size_t w = 0;
        //getline(&word, &w, stdin);
        // scanf("%[^\n]", word);
        fgets(word, MILLON+1, stdin);
        // printf("%s\n", word);
        int rep[MILLON+1];
        rep[0] = 0;
        //act = (char)getchar();
        while(word[it] != '\0') {
            //Procesing the input
            if(word[it] != word[it-1]) {
                cont++;
            }
            rep[it] = cont;
            it++;

            // printf("%c", act);
        }
        // printf("\n");

        int n;
        scanf("%d", &n);
        if(n == 0)
            break;

        while(n--) {
            int i, j;
            scanf("%d %d", &i, &j);

            //Check ocurrence
            // printf("%d %d -> %d %d\n", i, j, rep[i], rep[j]);
            if(rep[i] == rep[j])
                printf("SI\n");
            else
                printf("NO\n");
        }
        printf("\n");
        getchar();
    }
}