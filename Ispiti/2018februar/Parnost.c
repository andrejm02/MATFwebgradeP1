//Napisati program koji učitava cele brojeve do kraja ulaza. Na standardni izlaz ispisati brojeve čiji je zbir cifara paran ili imaju paran broj cifara. 
//Broj brojeva nije unapred poznat.
#include <stdio.h>

int main(){
    int n,c,j,br = 0, nbroj = 0;
    while(scanf("%d", &n) != EOF){
        c = n;
        while(n != 0){
            j = n%10;
            if(n < 10)
                j = n;
            n /= 10;
            br++;
            nbroj += j;
        }
        if(nbroj%2 == 0 || br%2 == 0)
            printf("%d ",c);
        nbroj = 0; br = 0;
    }           
}
