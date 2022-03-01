//Napisati program koji za ceo broj m i nenegativan ceo broj n računa vrednost polinoma 1+x+x^2+...+x^n stepena n u tački m.
//U slučaju greške, na standardni izlaz ispisati -1 i prekinuti program.
#include <stdio.h>
#include <math.h>

int main(){
    int broj = 0, n, m;
    scanf("%d %d", &m, &n);
    
    if (n < 0){
        puts("-1");
        return 1;
    }
    for(int i = 0; i <= n; i++)
        broj += (int)pow(m, i);
    
    printf("%d", broj);
}
