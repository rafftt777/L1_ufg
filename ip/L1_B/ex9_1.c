#include <stdio.h>
#include <math.h>

int main(void)
{
  int n, np = 0;
  int ns = 0;
  int o = 0;

  scanf("%d", &n);
  int n1 = n;

 //valor da ordem
  do
  {
    n1 /= 10;
    o++;
  }while(n1 != 0);

//Printando a ordem
  switch(o)
  {
    case 1:
    printf("(primeira ordem) ");
    break;

    case 2:
    printf("(segunda ordem) ");
    break;

    case 3:
    printf("(terceira ordem) ");
    break;

    case 4:
    printf("(quarta ordem) ");
    break;

    default:
    printf("Numero invalido!");
    return 0;
  }

  //inverter

  int ne, nin = 0;

  ne = n;

  int j;
  for(j = 0; j < o; j ++)
  {

    nin *= 10;
    nin = nin + ne % 10;
    ne /= 10;

  }

  //unid
int n2 = nin;
int od = o;
int nt = nin;

 printf("%d =", n);
  do
  {
    int i;
    for(i = 0; i < o; i++)
    {

      np = n2 % 10;

    switch(od)
      {
        case 1:
        if(np == 1)
        {
           printf(" %d unidade =", np);
        }
        else if(np > 1)
        {
          printf(" %d unidades =", np);
        }
        break;

        case 2:
        if(np == 1)
        {
           printf(" %d dezena +", np);
        }
        else if(np > 1)
        {
          printf(" %d dezenas +", np);
        }
        break;

        case 3:
        if(np == 1)
        {
           printf(" %d centena +", np);
        }
        else if(np > 1)
        {
          printf(" %d centenas +", np);
        }
        break;

        case 4:
        if(np == 1)
        {
           printf(" %d unidade de milhar +", np);
        }
        else if(np > 1)
        {
          printf(" %d unidades de milhar +", np);
        }
        break;

        case 0:
        continue;
      }

      n2 /= 10;
      od--;
    }

  }while(od > 0);

  //soma final
 ns = nt;
 int  pw = 1;
 int os = o;

    do
    {
      ns %= 10;

     switch(os)
     {
      case 1:
      printf(" %d", ns);
      return 0;

      case 2:
      ns *= 10;
      break;

      case 3:
      ns *= 100;
      break;

      case 4:
      ns *= 1000;
      break;
     }

      if(ns == 0)
      {

      }
      else
      {
        printf(" %d +", ns);
      }

     os--;
     ns = nt;
     ns /= 1 * (pow(10, pw));
      pw++;

    }while(os > 0);

return 0;


 }