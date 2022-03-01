//Napisati program koji učitava četiri cela broja i ispisuje proizvod negativnih.
//U slučaju da nijedan od učitanih brojeva nije negativan, ispisati 1.
#include <stdio.h>

int main(){
    int a,b,c,d,broj = 1;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    if (a < 0)
        broj = broj * a;
    
    if (b < 0)
        broj = broj * b;
    
    if (c < 0)
        broj = broj * c;
    
    if (d < 0)
        broj = broj *d;
    
    printf("%d\n", broj);
}
