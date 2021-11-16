\\Napisati program koji za dva uneta broja ispisuje njihovu aritmeticku sredinu (zaokruzenu na dve decimale).
#include <stdio.h>

int main(){   
    float a,b,as;
    scanf("%f %f", &a, &b);
    as = (a+b)/2;
    printf("%.2f", as);
}
