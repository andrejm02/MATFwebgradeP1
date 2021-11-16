//Napisati program koji za ceo broj m i nenegativan ceo broj n računa vrednost polinoma 1+x+x^2+...+x^n stepena n u tački m.
//U slučaju greške, na standardni izlaz ispisati -1 i prekinuti program.
#include <stdio.h>
#include <math.h>

int main(){
    int broj = 0, n, x, m, i = 0;
    scanf("%d %d", &m, &n);
    x = n;
    if (n < 0){
        puts("-1");
        return 1;
    }
    while (i < n+1){
        broj += (int)pow(m, i);
        i++;
    }
    printf("%d", broj);
}
