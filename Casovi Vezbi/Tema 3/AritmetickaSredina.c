//Napisati program koji za dva uneta broja ispisuje njihovu aritmeticku sredinu (zaokruzenu na dve decimale).
#include <stdio.h>

int main(){   
    float a,b;
    scanf("%f %f", &a, &b);
    printf("%.2f", (a+b)/2);
}
