//Napisati program učitava pet karaktera i ispisuje sumu ASCII kodova učitanih karaktera koji su cifre.
//U slučaju da nijedan od karaktera nije cifra, ispisati 0.
#include <stdio.h>
#include <ctype.h>

int main(){
    char a,b,c,d,e;
    int suma = 0;
    scanf("%c%c%c%c%c", &a, &b ,&c, &d, &e);

    if(isdigit(a))
        suma += a;
    
    if(isdigit(b))
        suma += b;
    
    if(isdigit(c))
        suma += c;
    
    if(isdigit(d))
        suma += d;
    
    if(isdigit(e))
        suma += e;
    
    printf("%d", suma);
}
