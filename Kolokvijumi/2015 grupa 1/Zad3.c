//Sa standardnog ulaza učitava se pozitivan ceo broj i ceo broj i (i>=1). Na standardni izlaz ispisati broj koji se dobija kada se ukloni
//i-ta cifra broja. Cifre se broje sa desne strane, tako da cifri jedinice odgovara pozicija 1. Neispravan ulaz je kada se unose
//negativan broj ili negativna vrednost ili nula za i i u tom slučaju na standardni izlaz ispisati -1. Ukoliko broj nema i-tu cifru broj ostaje nepromenjen.
#include <stdio.h>
#include <math.h>

int main(){
    int x, p;
    scanf("%d %d", &x, &p);
    if(x<0 || p <= 0){
        puts("-1");
        return 0;
    }    
    int levo = x/(int)pow(10,p);
    int desno = x % (int)pow(10,p-1);
    printf("%d\n", levo * (int)pow(10, p-1) + desno);
}
