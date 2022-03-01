//Sa standardnog ulaza unosi se broj n, a zatim i n elemenata niza celih brojeva (niz ne sme biti imati vise od 100 elemenata). 
//Napisati program koji za uneti niz racuna i na izlaz ispisuje njegov 'moving average' niz, odnosno niz b od n elemenata, gde je svaki element 
//niza b aritmeticka sredina elementa sa te pozicije u nizu a, kao i dva njemu susedna elementa, pri cemu je nulti element susedan poslednjem elementu. 
//Elemente niza b ispisati sa dva mesta iza decimalnog zareza. U slucaju neispravnog ulaza ispisati na izlaz -1 i prekinuti program.
#include <stdio.h>

int main(){
    int n,i;
    float movingAverage;
    scanf("%d", &n);
    int x[n];
    
    if(n <= 0 || n > 100){
        puts("-1");
        return 1;
    }
    for(i = 0; i < n; i++)
        scanf("%d", &x[i]);
    
    if(n == 1){
        movingAverage = x[0];
        printf("%.2f", movingAverage);
        return 1;
    }
    for(i = 0; i < n; i++){
        //slucajeve (i == 0) i (i == n-1) razlikujemo zbog uslova u zadatku koji kaze da je nulti element susedan poslednjem
        if(i == 0)
            movingAverage = (x[i] + x[i+1] + x[n-1])/3.0;
        else if(i == n-1)
            movingAverage = (x[i] + x[i-1] + x[0])/3.0;
        else
            movingAverage = (x[i] + x[i-1] + x[i+1])/3.0;
        printf("%.2f ", movingAverage);
    }
}
