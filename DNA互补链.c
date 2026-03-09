#include<stdio.h>

void cod(char a[], char *codptr[]);
int main() {
    char a[256], codn[256];
    int i;
   scanf("%255s",a);
    cod(a, & codn);

    printf("%s", codn);
    return 0;
}
void cod(char a[], char *codptr[]) {
    char dna[2][4] = {
        {
            'A',
            'T',
            'C',
            'G'
        }, {
            'T',
            'A',
            'G',
            'C'
        }
    };
    int i, j;
    for (i = 0; a[i]!='\0'; i++) {
        for (j = 0; j < 4; j++) {
            if (a[i] == dna[0][j]) {
                codn[i] = dna[1][j];
                break;
            }
        }
    }
    codn[i] = '\0';
}