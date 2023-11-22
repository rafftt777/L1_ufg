#include <stdio.h>

int main(void)
{

    int data, d, m, a;

    scanf("%d", &data);

    d = data / 1000000;

    a = data % 10000;

    m = data / 10000;
    m = m % 100;

    int ma = m;

//cond de existencia

    if(d < 1 || a < 1)
    {
        printf("Data invalida!");
            return 0;
    }

    if(data / 1000000000 > 0)
    {
        printf("Data invalida!");
            return 0;
    }
    else if(data / 10000000 < 1)
    {
        printf("Data invalida!");
            return 0;
    }

    if(m < 1 || m > 12)
    {
        printf("Data invalida!");
            return 0;
    }
    switch(ma)
    {
         //30 dias

        case 12:
        case 11:
        case 9:
        case 6:
        case 4:
        if(d > 31)
        {
            printf("Data invalida!");
            return 0;
        }
        else
        {}
        break;

        //31 dias
        case 10:
        case 8:
        case 1:
        case 3:
        case 5:
        case 7:
        if(d > 31)
        {
            printf("Data invalida!");
            return 0;
        }
        else
        {}
        break;

        //28
        case 2:
        if(d > 28)
        {
            printf("Data invalida");
            return 0;
        }
        else
        {}
        break;
    }
    //dia

    printf("%d de ", d);


    //mês

    switch (ma)
    {
        case 1:
            printf("janeiro de ");
            break;
        case 2:
            printf("fevereiro de ");
            break;
        case 3:
            printf("março de ");
            break;
        case 4:
            printf("abril de ");
            break;
        case 5:
            printf("maio de ");
            break;
        case 6:
            printf("junho de ");
            break;
        case 7:
            printf("julho de ");
            break;
        case 8:
            printf("agosto de ");
            break;
        case 9:
            printf("setembro de ");
            break;
        case 10:
            printf("outubro de ");
            break;
        case 11:
            printf("novembro de ");
            break;
        case 12:
            printf("dezembro de ");
            break;
    }

            //ano

            printf("%d", a);

            return 0;

 }





