//Napisati program koji kao ulaz dobija kao realne brojeve osnovice a i b i visinu h trapeza
//a na izlaz ispisuje njegovu povrsinu, zaokruzenu na dve decimale.
#include <stdio.h>

int main(){
    float a,b,h,m,p;
    scanf("%f %f %f", &a, &b, &h);
    m = (a+b)/2;
    p = m * h;
    printf("%.2f", p);
}
