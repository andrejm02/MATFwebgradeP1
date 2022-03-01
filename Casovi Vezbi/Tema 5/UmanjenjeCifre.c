//Napisati program koji učitava četvorocifren broj i ispisuje broj koji se dobija kada se njegova
//najveća cifra umanji za jedan. U slucaju da se najveća cifra broja pojavljuje na više pozicija,
//umanjenje izvršiti na najmanjoj poziciji na kojoj se ta cifra nalazi. U slučaju neispravnog ulaza, ispisati -1 i prekinuti program.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int broj,znak = 0;
    scanf("%d", &broj);
    //Odredjivanje znaka originalnog broja
    if(broj < 0){
        znak = 1;
    }
    broj = abs(broj);
    if (broj < 1000 || broj > 9999) {
        puts("-1");
        return 1;
    }
    int j,d,s,h;
    j = broj%10;
    d = (broj/10)%10;
    s = (broj/100)%10;
    h = broj/1000;
    int noviBroj = broj;
    int max = j;
    int pozMax = 1;
    
    if (broj > 0){
        if (max < d){
            max = d;
            pozMax = 10;            
        }
        if (max < s){
            max = s;
            pozMax = 100;           
        }
        if (max <h){
            max = h;
            pozMax = 1000;            
        }
        noviBroj = noviBroj - max*pozMax + (max-1)*pozMax;
        
        if(znak == 1){
            printf("%d\n", -noviBroj);
            return 0;
        }
        else{
            printf("%d\n", noviBroj);
            return 0;
        }
    }
    else{
        puts("-1");
        return 0;
    }
}
