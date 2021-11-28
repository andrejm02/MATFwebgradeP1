//Sa standardnog ulaza se učitava prirodan broj n(n≤100), a zatim n^2 celih brojeva koje treba sačuvati u odgovarajućoj kvadratnoj matrici. 
//Proveriti da li je matrica magični kvadrat, i ako jeste, na standardni izlaz ispisati sumu svih elemenata matrice, a inače 0. 
//U slučaju greške, ispisati −1 na standardni izlaz. Uputstvo: Kvadratna matrica je magični kvadrat ako je suma elemenata u svakoj koloni i svakoj vrsti jednaka.
#include <stdio.h>

int main(){
    int n,sumk = 0, sumv = 0,j,sum = 0,k,br = 0;
    scanf("%d", &n);
    int a[n][n];
    if(n > 100 || n < 1){
        puts("-1");
        return 1;
    }
    for(int i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }
    for(k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            sumk += a[i][k];
        }
        for(j = 0; j < n; j++){
            sumv += a[k][j];
        }
        if(sumv == sumk)
            br++;
    }
    if(br == n){
        printf("%d",sum);
        return 0;
    }
    else
        puts("0");
}
