#include <stdio.h>


void oddOReven(int v){
    int i, j, flag, o = 0, e = 0;
    int number[v];


    for(i = 0; i < v; i++)
        scanf("%d", &number[i]);

    for(i = 0; i < v; i++)
        for(j = 0; j < v - 1; j++)
            if(number[j] > number[j + 1]){
                flag = number[j];
                number[j] = number[j + 1];
                number[j + 1] = flag;
            }

    for(i = 0; i < v; i++){
        if(number[i] % 2 == 0)
            e++;
        else
            o++;
    }
   int odd[o];
   int even[e];

    i = 0;
    j = 0;
    do{
        if(number[j] % 2 == 0){
            even[i] = number[j];
            i++;
        }
    j++;
    }while(j < v);

    i = 0;
    j = 0;

    do{
        if(number[j] % 2 != 0){
            odd[i] = number[j];
            i++;
        }
    j++;
    }while(j < v);



    for(i = 0; i < e; i++)
        printf("%d\n", even[i]);

    while(o--)
        printf("%d\n", odd[o]);


}




int main(void){

    int v;

    scanf("%d", &v);
    oddOReven(v);
}