// Usuario de Acepta el reto: jjjjjjjp022
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <string>

int cmp_cha(char *a, char *b) // 1 if equals
{
    if (*a >= 'a' && *b < 'a')
        return *a - 'a' == *b - 'A';
    else if (*a < 'a' && *b >= 'a')
        return *a - 'A' == *b - 'a';
    else
        return *a == *b;
}

int cmp_str(char *a, char *b)
{ // 1 if equals
    if (strlen(a) != strlen(b))
        return 0;
    int k = 0;
    while (a[k] != '\0')
    {
        if (cmp_cha(&a[k], &b[k]) == 0)
            return 0;

        k++;
    }
    return 1;
}

int count_cap(char* word) {
    int k = 0, ret = 0;
    while (word[k] != '\0')
    {
        if (word[k] < 'a') ret++;

        k++;
    }
    return ret;
}

char* to_upper(char* word) {
    char* ret = (char*) malloc(sizeof(char)*(strlen(word)+1));
    // char* ret = (char*) malloc(sizeof(char)*(51));
    size_t k = 0;
    while (word[k] != '\0')
    {
        if (word[k] >= 'a') {
            ret[k] = word[k] - 32;//('a'-'A') es 32
        }
        else {
            ret[k] = word[k];
        }

        k++;
    }
    ret[k] = '\0';
    return ret;
}

char* str_cpy(char *dest, const char *src)
{
    size_t i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';

    return dest;
}

void update_cap(char marc[51], char word[51]) {  //between two choose the upper letter
    size_t i;

    for (i = 0; marc[i] != '\0'; i++)
        if(word[i] < marc[i])  marc[i] = word[i];   //Upper choice
}

int main(int argc, char *argv[])
{
    while (1)
    {
        unsigned int n;
        if (scanf("%u", &n) == EOF)
            return 0;

        std::map<std::string, char*> m;
        char *words[n];
        for (int i = 0; i < n; i++)
        {
            words[i] = (char *)malloc(sizeof(char) * 51);
            scanf("%s", words[i]);

            // Recompute to camelCase
            // char* ref = to_upper(words[i]);
            std::string s(to_upper(words[i]));
            // printf("%s\n", s.c_str());
            if(m.count(s) == 0) {
                // printf("A\n");
                m[s] = words[i];
                // m[s].second[0] = count_cap(words[i]);
            }
            else {
                update_cap(m[s], words[i]);
                // int count = count_cap(words[i]);
                // if(m[s].second[0] < count) {
                //     // printf("B\n");
                //     strcpy(m[s].first, words[i]);
                //     m[s].second[0] = count;
                // }

                words[i] = m[s];
            }

            // for(auto a:m) {
            //     printf("%s: %s\n", a.first.c_str(), a.second);
            // }
        }

        for (int i = 0; i < n; i++)
        {
            printf("%s\n", words[i]);
        }
        printf("---\n");
    }
    return 0;
}