//Sa standardnog ulaza se učitava prirodan broj n(n≤100), a zatim n2 realnih brojeva koje treba sačuvati u odgovarajućoj kvadratnoj matrici. 
//Proveriti da li je matrica kososimetrična, i ako jeste, na standardni izlaz ispisati najmanji element matrice zaokružen na 2 decimale
//a inače ispisati najveći element matrice zaokružen na 2 decimale. Indeksiranje počinje od 0 i za vrste i za kolone.
//U slučaju greške, ispisati −1 na standardni izlaz i prekinuti program.
//Uputstvo: Kvadratna matrica A je kososimetrična ako je AT=−A. Transponat matrice A, u oznaci AT je matrica čije su kolone jednake odgovarajućim vrstama matrice A.
#include <stdio.h>

int main(){
    int n,i,j,br = 0;
    scanf("%d",&n);
    if(n < 1 || n > 100){
        puts("-1");
        return 1;
    }
    float a[n][n], b[n][n], c[n][n],min = 1000,max = -1000;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++){
            scanf("%f",&a[i][j]);
            if(min > a[i][j])
                min = a[i][j];
            if(max < a[i][j])
                max = a[i][j];
        }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            b[i][j] = a[j][i];
            c[i][j] = -a[i][j];
            if(a[i][j] == 0)
                c[i][j] = 0;
            if(b[i][j] == c[i][j])
                br++;
        }
    }
    if(br == n*n){
        printf("%.2f",min);
        return 0;
    }
    else{
        printf("%.2f",max);
    }
}
