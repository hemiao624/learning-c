#include<stdio.h>

#include<string.h>

int judge_round(const char *s1,const char *s2);
int main() {
    int n;
    scanf("%d", & n);
    int wincnt1 = 0, wincnt2 = 0;
    int i = 0;
 
    char s1[10], s2[10];
    for (i; i < n; i++) {
        scanf(
            "%s %s",
            s1,
            s2
        );
       int result = judge_round(s1, s2);
        if (result == 1) {
            wincnt1++;
        }
        else if (result == 2) {
            wincnt2++;
        }
    }
    if (wincnt1 > wincnt2) {
        printf("Player1");
    }
    if (wincnt1 < wincnt2) {
        printf("Player2");
    } else {
        printf("Tie");
    }
    return 0;
}
int judge_round(const char * s1,const char * s2) {
    if (strcmp(s1, s2) == 0){
	
        return 0;
}
if ((strcmp(s1, "Rock") == 0 && strcmp(s2, "Scissors") == 0) ||
    (strcmp(s1, "Scissors") == 0 && strcmp(s2, "Paper") == 0) ||
    (strcmp(s1, "Paper") == 0 && strcmp(s2, "Rock") == 0)) {
    return 1;
} else {
    return 2;
}
}