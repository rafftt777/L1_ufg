#include <stdio.h>

    void combinator(void){
        int i, j, s1 = 0, s2 = 0;

        char string[2][50];

        scanf("%s %s", string[0], string[1]);

        for(i = 0; string[0][i] != '\0'; i++)
            s1++;

        for(i = 0; string[1][i] != '\0'; i++)
            s2++;

        int s3 = s1 + s2;
        for(i = 0; i < s3; i++){
            if(s1 > 0)
            printf("%c", string[0][i]);
            s1--;
            if(s2 > 0)
            printf("%c", string[1][i]);
            s2--;
        }
        printf("\n");
    }
int main(void){

    int n;
    scanf("%d", &n);
    do{
        combinator();
        n--;
    }while(n > 0);
}