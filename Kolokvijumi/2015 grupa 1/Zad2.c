//Sa standardnog ulaza unose se jedan karakter (p ili n) i dva pozitivna trocifrena broja. Na osnovu vrednosti unetog karaktera izracunati
//i ispisati na standardni izlaz sledece:
//Ako je uneti karakter p - zbir cifara na parnim pozicijama unetih brojeva
//Ako je uneti karakter n - zbir cifara na neparnim pozicijama unetih brojeva
//Cifre se broje sa desne strane, tako da cifri jedinice odgovara pozicija 1. 
//U slucaju greške ( ukoliko karakter nije p ili n ili nisu uneti pozitivni trocifreni brojevi ) ispisati -1.
#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    int x,y, d1, d2, f1, f2;
    scanf("%c %d %d", &c, &x, &y);
    if (x > 100 && x< 999 && y>100 && y < 999){
        if (c == 'p'){
            d1 = (x/10)%10;
            d2 = (y/10)%10;
            printf("%d\n", d1 + d2);
            return 0;
        }else if (c == 'n'){
            d1 = x%10;
            f1 = (x/100)%10;
            d2 = y%10;
            f2 = (y/100)%10;
            printf("%d\n", d1 + d2 + f1 + f2);
            return 0;
        }else if(c != 'n' && c!= 'p'){
            puts("-1");
            return 1;
        }
    }else{
        puts("-1");
        return 1;
    }
}
