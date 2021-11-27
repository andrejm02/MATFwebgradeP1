//Napisati program koji učitava pozitivne četvorocifrene brojeve sve dok se ne unese broj 0 ili dok se ne unese broj koji nije pozitivan i četvorocifren.
//Na standardni izlaz ispisati brojeve koji su dobijeni transformacijom učitanih, tako što se prva i poslednja cifra u broju zamene, ukoliko 
//su obe bile parne, a inače se izbace iz broja. Broj brojeva nije unapred poznat. 
//U slučaju neispravnog unosa, ispisati −1 na standardni izlaz i prekinuti učitavanje brojeva.
#include <stdio.h>

int main(){
    int n,c, br = 0,poz = 1, j, d, s, h;
    for(int i = 0;i < 100;i++){
        scanf("%d", &n);
        if(n == 0)
            return 0;
        if(n < 1000 || n > 9999){
            puts("-1");
            return 1;
        }
        j = n%10; d = (n/10)%10; s = (n/100)%10; h = n/1000;
        if(j%2 == 0 && h%2 == 0)
            printf("%d ",j*1000 + s*100 + d*10 + h);
        else
            printf("%d ", s*10 + d);
    }
}
