//Sa standardnog ulaza unosi se broj telefona u formatu: pozivni broj grada u Srbiji (tri cifre), zatim kosa crta, prvi deo od tri cifre
//jedna crtica i konačno drugi deo broja, koji se isto sastoji od tri cifre (primer: 011/345-899). Napisati program koji sa standardnog
//ulaza učitava broj telefona i u zavisnosti od pozivnog broja, računa i ispisuje tajni kod:
//ukoliko se pozivni broj završava parnom cifrom - tajni kod se dobija kao suma kubova cifara unetog broja (ne računajući pozivni broj)
//ukoliko se pozivni broj završava neparnom cifrom - tajni kod se dobija kao razlika sume cifara prvog dela broja (tri cifre nakon kose crte)
//i sume cifara drugog dela broja (tri cifre nakon crtice)
//Napomena: Pretpostaviti da su ulazni podaci ispravno zadati u opisanom formatu.
#include <stdio.h>
#include<math.h>

int main(){
    char a,b,c,d,e,f,g,h,j,i,k;
    int a1,b1,c1,e1,f1,g1,j1,i1,k1,sum;
    scanf("%c%c%c%c%c%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f,&g,&h,&j,&i,&k);
    a1 = a - 48; b1 = b - 48; c1 = c - 48; e1 = e - 48; f1 = f - 48; g1 = g - 48; j1 = j - 48; i1 = i - 48; k1 = k - 48;
    if(c1%2 == 0)
        sum = pow(e1, 3)+pow(f1, 3)+pow(g1, 3)+pow(j1, 3)+pow(i1, 3)+pow(k1, 3);
    else if(c1%2 == 1)
        sum = (e1+f1+g1) - (j1+i1+k1);
    else{
        puts("-1");
        return 1;
    }
    printf("%d",sum);    
}
