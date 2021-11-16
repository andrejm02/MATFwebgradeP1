#include <stdio.h>

int main(){
    float a,b,h,m,p;
    scanf("%f %f %f", &a, &b, &h);
    m = (a+b)/2;
    p = m * h;
    printf("%.2f", p);
}
