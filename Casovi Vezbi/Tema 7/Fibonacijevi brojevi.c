//Napisati program koji sa standardnog ulaza ucitava pozitivan ceo broj n, a na stanrdani izlaz ispisuje prvih n clanova Fibonacijevog niza.
//Prva dva elementa su 0 i 1, a svaki sledeci dobija se sabiranjem prethodna dva. U slucaju neispravnih ulaznih podataka ispisati -1.
#include <stdio.h>

int main()
{
    int p = 0, s = 0, n = 1, x, i;
    scanf("%d", &x);
    if(x <= 0)
    {
        puts("-1");
        return 1;
    }
    for(i = 0; i < x; i++){
        printf("%d ", s);
        p = s;
        s = n;
        n = p +s;       
    }
}
