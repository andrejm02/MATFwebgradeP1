//Napisati program koji za ceo broj m i nenegativan ceo broj n računa vrednost polinoma 1-x^2/2!+x^4/4!-...+(-1)^(n)x^(2*n)/(2*n)!
//stepena n u tački m. U slučaju greške, na standardni izlaz ispisati -1 i prekinuti program. Prilikom racunanja
//koristiti brojeve dvostruke tacnosti. Rezultat ispisati sa 4 decimale.
#include <stdio.h>
#include <math.h>
int main(){
    int m,n;
    double broj, sum = 0, fakt = 1;
    scanf("%d %d", &m, &n);
    
    if(n < 0){
        puts("-1");
        return 1;
    }
    for(int i = 0; i <= n; i++){
        for(int j = i*2; j > 0; j--){
            fakt *= j;           
        }
        broj = pow(-1,i)*pow(m, 2*i)/fakt;
        sum += broj;
        fakt = 1;
    }
    printf("%.4lf\n", sum);
    return 0;
}
