//Sa standardnog ulaza se učitava neparan prirodan broj n(n≤101), a zatim n2 realnih brojeva koje treba sačuvati u odgovarajućoj kvadratnoj matrici. 
//Proveriti da li je matrica dijagonalno dominantna, i ako jeste, na standardni izlaz ispisati sumu svih elemenata matrice zaokruženu na dve decimale, a inače 0. 
//U slučaju greške, ispisati −1 na standardni izlaz.
//Uputstvo: Kvadratna matrica je dijagonalno dominantna ako je u svakoj vrsti apsolutna vrednost dijagonalnog elementa te vrste veća od zbira apsolutnih 
//vrednosti vandijagonalnih elemenata te vrste.
#include <stdio.h>
#include <math.h>

int main(){
    int n,br1 = 0,br2 = 0;
    scanf("%d", &n);
    float a[n][n],sum = 0;
    if(n%2 == 0 || n < 1){
        puts("-1");
        return 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%f", &a[i][j]);
            a[i][j] = a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(fabs(a[i][i]) > fabs(a[i][j])){
                br1++;
                if(br1 == n-1){
                    br2++;
                    br1 = 0;
                }
            }
        }
    }
    if(br2 == n){
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                sum += a[i][j];
        printf("%.2f", sum);
    }
    else
        puts("0");
}
