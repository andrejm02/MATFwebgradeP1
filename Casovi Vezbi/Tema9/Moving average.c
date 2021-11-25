//Sa standardnog ulaza unosi se broj n, a zatim i n elemenata niza celih brojeva (niz ne sme biti imati vise od 100 elemenata). 
//Napisati program koji za uneti niz racuna i na izlaz ispisuje njegov 'moving average' niz, odnosno niz b od n elemenata, gde je svaki element 
//niza b aritmeticka sredina elementa sa te pozicije u nizu a, kao i dva njemu susedna elementa, pri cemu je nulti element susedan poslednjem elementu. 
//Elemente niza b ispisati sa dva mesta iza decimalnog zareza. U slucaju neispravnog ulaza ispisati na izlaz -1 i prekinuti program.
#include <stdio.h>

int main(){
    int x,i;
    float b;
    scanf("%d", &x);
    int n[x];
    if(x <= 0 || x > 100){
        puts("-1");
        return 1;
    }
    for(i = 0; i < x; i++)
        scanf("%d", &n[i]);
    if(x == 1){
        b = n[0];
        printf("%.2f", b);
        return 1;
    }
    for(i = 0; i < x; i++){
        if(i == 0)
            b = (n[i] + n[i+1] + n[x-1])/3.0;
        else if(i == x-1)
            b = (n[i] + n[i-1] + n[0])/3.0;
        else
            b = (n[i] + n[i-1] + n[i+1])/3.0;
        printf("%.2f ", b);
    }
}
