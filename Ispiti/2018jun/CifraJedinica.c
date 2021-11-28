//Napisati program koji učitava cele brojeve do kraja ulaza. Na standardni izlaz ispisati brojeve čija je cifra jedinica veća od zbira ostalih 
//cifara broja (podrazumevati da je ovaj zbir 0 u slučaju jednocifrenih brojeva). Broj brojeva nije unapred poznat.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, c, j, sum = 0,j1;
    while(scanf("%d", &n) != EOF){
        c = n;
        n = abs(n);
        for(int i = 0;n != 0;i++){
            j = n%10;
            sum += j;
            if(i == 0){
                j1 = n%10;
                sum = 0;
            }
            n /= 10;
        }
        if(j1 > sum)
            printf("%d ", c);
        sum = 0;
    }
}
