//Napisati program koji za učitanu kvadratnu matricu i indeks vrste i ispisuje najmanji element i-te vrste. 
//Pretpostaviti da je maksimalna dimenzija matrice 50×50. Prvo se učitava dimenzija kvadratne matrice n, zatim njeni elementi, pa indeks vrste. 
//U slučaju greške ispisati -1 i prekinuti program.
#include <stdio.h>

int main(){

    int n,m;
    scanf("%d", &n);
    
    int a[n][n], i, j, min = 100;

    for(i = 0; i < n;i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);              
        }
    }
    scanf("%d", &m);

    if(n < 1 || n > 50 || m >= n || m < 0){
        puts("-1");
        return 1;
    }

    for(j = 0; j < n; j++){
        if(min > a[m][j])
            min = a[m][j];
    }

    printf("%d", min);

}
