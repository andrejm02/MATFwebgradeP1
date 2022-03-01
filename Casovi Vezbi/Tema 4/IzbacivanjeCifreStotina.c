//Napisati program koji ispisuje broj koji se dobija izbacivanjem cifre stotina
//u unetom prirodnom broju. Napomena: Pretpostaviti da je unos ispravan.
#include <stdio.h>
#include <math.h>

int main(){
    long broj;
    scanf("%ld", &broj);
    
    long levo = broj/(long)pow(10,3);
    long desno = broj % (long)pow(10,2);
    long noviBroj = levo * (long)pow(10, 2) + desno;
    
    printf("%ld", noviBroj);
}
