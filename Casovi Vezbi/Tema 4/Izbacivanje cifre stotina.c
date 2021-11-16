//Napisati program koji ispisuje broj koji se dobija izbacivanjem cifre stotina
//u unetom prirodnom broju. Napomena: Pretpostaviti da je unos ispravan.
#include <stdio.h>
#include <math.h>

int main(){
    long x;
    scanf("%ld", &x);
    long levo = x/(long)pow(10,3);
    long desno = x % (long)pow(10,2);
    long novo = levo * (long)pow(10, 2) + desno;
    printf("%ld", novo);
}
