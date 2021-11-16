//Napisati program koji učitava četvorocifren broj i ispisuje koliko je cifara iste parnosti kao pozicija
//na kojoj se nalaze u broju. Pozicije cifara brojimo od 0 sa desna na levo, tj. cifra jedinica je na poziciji 0.
//U slučaju neispravnog ulaza ispisati -1 i prekinuti program.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int broj,j,d,s,h,brojac = 0;
    scanf("%d", &broj);
    broj = abs(broj);
    j = broj%10;
    d = (broj/10)%10;
    s = (broj/100)%10;
    h = broj/1000;
    if (broj <= 1000 || broj >= 9999) {
        puts("-1");
        return 1;
    }
    else {
        if (j%2 == 0)
            brojac++;
        if(d%2 == 1)
            brojac++;
        if(s%2 == 0)
            brojac++;
        if(h%2 == 1)
            brojac++;
        printf("%d\n", brojac); 
    }
}
