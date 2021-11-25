//Napisati program koji za unetu realnu vrednost duzine poluprecnika sfere ispisuje njenu zapreminu zaokruzenu na tri decimale.
//Napomena: Pretpostaviti da je unos ispravan.
#include <stdio.h>

int main(){
    float r,v;
    const float pi = 3.141592653589793238462643;
    scanf("%f", &r);
    v = (4 * r * r *r * pi) / 3;
    printf("%.3f", v);
}
