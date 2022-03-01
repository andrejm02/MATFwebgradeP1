//Sa standardnog ulaza unosi se broj n, a zatim i n elemenata niza celih brojeva (niz ne sme biti imati vise od 100 elemenata). 
//Napisati program koji na standardni izlaz ispisuje niz koji se dobija tako sto i-ti element predstavlja sumu svih elemenata sa indeksima manjim 
//ili jednakim od i. U slucaju neispravnog ulaza na izlaz ispisati -1 i prekinuti program.
#include <stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    int x[n];
    
    if(n > 100 || n <= 0){
        puts("-1");
        return 1;
    }
    for(int i = 0; i < n; i++)
        scanf("%d", &x[i]);
    
    for(int i = 0; i < n; i++){
        sum += x[i];
        printf("%d ", sum);
    }
}
