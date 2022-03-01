//Napisati program koji sa standardnog ulaza ucitava ceo broj, a na standardni izlaz ispisuje srednju cifru, ukoliko je broj neparne duzine
//odnosno aritmeticku sredinu srednjih cifara, ako je broj parne duzine. Ispis treba da bude zaokruzen na jednu decimalu.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x,n = 0,y;
    float broj,a,c;
    scanf("%d", &x);
    
    x = abs(x);
    y = x;
    //Brojanje cifara
    while(x/10.0 > 0){
        x /= 10;
        n++;
    }
    if(n%2 == 1){
        broj = (y/(int)pow(10, (n/2.0) - 0.5))%((int)pow(10, (n/2.0) - ((n/2.0) - 1)));
    }else{
        a = (y/(int)pow(10, (n/2.0)))%((int)pow(10, (n/2.0) - ((n/2.0) - 1)));
        c = (y/(int)pow(10, (n/2.0) - 1))%((int)pow(10, (n/2.0) - ((n/2.0) - 1)));
        broj = (a+c)/2;
    }
    printf("%.1f", broj);
    return 0;
}
