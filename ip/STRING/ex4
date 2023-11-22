#include <stdio.h>

    void analfas(void){
        int i, count = 0, forONE = 0, forTWO = 0;

        char *ptr;

        char number[5];

        scanf("%s", number);

        for(i = 0; number[i] != '\0'; i++)
            count++;

        if(count == 5)
            printf("3\n");

        else{
                if((number[0] == 'o' && number[1] == 'n') || (number[0] == 'o' && number[2] == 'e' ) || (number[1] == 'n' && number[2] == 'e'))
                    printf("1\n");
                else if((number[0] == 't' && number[1] == 'w') || (number[0] == 't' && number[2] == 'o') || (number[1] == 'w' && number[2] == 'o'))
                    printf("2\n");
            }
        }
        
int main(void){
    int n;

    scanf("%d%*c", &n);

    do{
        analfas();
        n--;
    }while(n > 0);
}
