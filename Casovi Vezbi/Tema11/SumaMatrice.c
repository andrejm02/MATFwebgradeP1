//Napisati program koji za učitanu kvadratnu matricu celih brojeva ispisuje sumu elemenata čiji je indeks kolone paran (broji se od 0). 
//Pretpostaviti da je maksimalna dimenzija matrice 50×50. Prvo se učitava dimenzija kvadratne matrice n, a zatim njeni elementi. 
//U slučaju greške ispisati -1 i prekinuti program.
#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    if(n < 1 || n > 50){
        puts("-1");
        return 1;
    }
    
    int a[n][n], i, j, sum = 0;

    for(i = 0; i < n;i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
            if(j%2 == 0)
                sum += a[i][j];
        }
    }

    printf("%d",sum);

}
