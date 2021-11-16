//Napisati program koji učitava četvorocifren broj i ispisuje broj koji se dobija kada se njegova
//najveća cifra umanji za jedan. U slucaju da se najveća cifra broja pojavljuje na više pozicija,
//umanjenje izvršiti na najmanjoj poziciji na kojoj se ta cifra nalazi. U slučaju neispravnog ulaza, ispisati -1 i prekinuti program.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,e = 0;
    scanf("%d", &x);
    if(x < 0){
        e = 1;
    }
    x = abs(x);
    if (x < 1000 || x > 9999) {
        puts("-1");
        return 1;
    }
    int j,d,s,h;
    j = x%10;
    d = (x/10)%10;
    s = (x/100)%10;
    h = x/1000;
    int nbroj = x;
    int poz_max = 1;
    if (x > 0){
        int max = j;
        if (max < d){
            max = d;
            poz_max = 10;            
        }
        if (max < s){
            max = s;
            poz_max = 100;           
        }
        if (max <h){
            max = h;
            poz_max = 1000;            
        }
        nbroj = nbroj - abs(max)*poz_max + (abs(max)-1)*poz_max;
        if(e == 1){
            printf("%d\n", -nbroj);
            return 0;
        }
        else{
            printf("%d\n", nbroj);
            return 0;
        }
    }
    else{
        puts("-1");
        return 0;
    }
}
