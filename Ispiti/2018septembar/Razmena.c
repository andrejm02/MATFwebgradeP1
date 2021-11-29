//Napisati program koji učitava prirodne brojeve do kraja ulaza. Na standardni izlaz ispisati brojeve koji se dobijaju razmenom prve i poslednje 
//cifre učitanih brojeva. Broj brojeva nije unapred poznat. U slučaju greške ispisati -1 na standardni izlaz i prekinuti program.
#include <stdio.h>

int main(){
    int n,j,j1,c,j2,nbroj = 0, poz = 1;
    while(scanf("%d",&n) != EOF){
        c = n;
        if(n < 0){
                puts("-1");
                return 1;
            }
            if(n == 0)
                printf("%d ",nbroj);
        for(int i = 0; n != 0; i++){
            if(i == 0)
                j1 = n%10;
            j = n%10;
            if(n < 10)
                j = n;
            nbroj += j*poz;
            n /= 10;
            if(n < 1)
                printf("%d ",nbroj - j1 + j2 - j2*poz + j1*poz);
            if(n < 10 && n >= 1){
                j2 = c/(poz*10);
            }
            poz *= 10;          
        }
        nbroj = 0;
        poz = 1;
    }
}
