//Napisati program koji za učitanu kvadratnu matricu ispisuje najveći element okvira matrice. 
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
    
    int a[n][n], i, j, max = -100;

    for(i = 0; i < n;i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
            if(max < a[i][j])
                max = a[i][j];
                
        }
    }

    printf("%d",max);

}
