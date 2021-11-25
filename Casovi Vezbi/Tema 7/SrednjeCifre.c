//Napisati program koji sa standardnog ulaza ucitava ceo broj, a na stanrdani izlaz ispisuje srednju cifru, ukoliko je broj neparne duzine
//odnosno aritmeticku sredinu srednjih cifara, ako je broj parne duzine. Ispis treba da bude zaokruzen na jednu decimalu.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x,b,n = 0,y;
    float broj,a,c;
    scanf("%d", &x);
    x = abs(x);
    y = x;
    for(int i = 0;i < 50; i++){
        if(x/10.0 > 0){
            b = x%10;
            x /= 10;
            n++;
        }
    }
    if(n%2 == 1){
        broj = (y/(int)pow(10, (n/2.0) - 0.5))%((int)pow(10, (n/2.0) - ((n/2.0) - 1)));
            printf("%.1f",broj);
            return 0;
    }
    if(n%2 == 0){
        a = (y/(int)pow(10, (n/2.0)))%((int)pow(10, (n/2.0) - ((n/2.0) - 1)));
        c = (y/(int)pow(10, (n/2.0) - 1))%((int)pow(10, (n/2.0) - ((n/2.0) - 1)));
        broj = (a+c)/2;
        printf("%.1f", broj);
        return 0;
    }
}
