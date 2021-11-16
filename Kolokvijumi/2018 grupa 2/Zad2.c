//Sa standardnog ulaza unosi se broj telefona u formatu broj mobilnog operatera (tri cifre), zatim kosa crta, prvi deo od četiri cifre, jedna crtica 
//i konačno drugi deo broja, koji se sastoji od tri cifre (primer: 064/0710-172). Napisati program koji sa standardnog ulaza učitava broj telefona i 
//u zavisnosti od mreže, računa i ispisuje tajni kod:
//Telekom Srbija (064, 065, 066) - tajni kod se dobija kao suma kvadrata cifara unetog broja (ne računajući pozivni broj)
//Vip Mobile (060, 061, 068) - tajni kod se dobija kao zbir cifara prvog dela broja (četiri cifre nakon kose crte)
//Telenor (062, 063, 069) - tajni kod se dobija kao zbir cifara drugog dela broja (tri cifre nakon crtice)
//Napomena: Pretpostaviti da su ulazni podaci ispravno zadati u opisanom formatu.
#include <stdio.h>
#include<math.h>

int main(){
    char a,b,c,d,e,f,g,h,j,i,k,l;
    int a1,b1,c1,e1,f1,g1,h1,i1,k1,l1,sum;
    scanf("%c%c%c%c%c%c%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f,&g,&h,&j,&i,&k,&l);
    a1 = a - 48; b1 = b - 48; c1 = c - 48; e1 = e - 48; f1 = f - 48; g1 = g - 48; h1 = h - 48; i1 = i - 48; k1 = k - 48; l1 = l - 48;
    if(a == '0' && b == '6' && c == '4' || a == '0' && b == '6' && c == '5' || a == '0' && b == '6' && c == '6')
        sum = pow(e1, 2)+pow(f1, 2)+pow(g1, 2)+pow(h1, 2)+pow(i1, 2)+pow(k1, 2)+pow(l1, 2);
    else if(a == '0' && b == '6' && c == '0' ||a == '0' && b == '6' && c == '1' ||a == '0' && b == '6' && c == '8')
        sum = e1+f1+g1+h1;
    else if (a == '0' && b == '6' && c == '2' ||a == '0' && b == '6' && c == '3' ||a == '0' && b == '6' && c == '9'){
        sum = i1+k1+l1;
    }
    else{
        puts("-1");
        return 1;
    }
    printf("%d",sum);    
}
