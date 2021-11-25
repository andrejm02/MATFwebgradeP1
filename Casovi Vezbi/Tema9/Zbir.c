//Sa standardnog ulaza unosi se broj n, a zatim i n elemenata niza celih brojeva (niz ne sme biti imati vise od 100 elemenata). 
//Napisati program koji na standardni izlaz ispisuje niz koji se dobija tako sto i-ti element predstavlja sumu svih elemenata sa indeksima manjim 
//ili jednakim od i. U slucaju neispravnog ulaza na izlaz ispisati -1 i prekinuti program.
#include <stdio.h>

int main(){
    int x, sum = 0;
    scanf("%d", &x);
    int n[x];
    if(x > 100 || x <= 0){
        puts("-1");
        return 1;
    }
    for(int i = 0; i < x; i++)
        scanf("%d", &n[i]);
    for(int i = 0; i < x; i++){
        sum += n[i];
        printf("%d ", sum);
    }
}
