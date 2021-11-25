//Sa standardnog ulaza unosi se broj n, a zatim i n elemenata niza celih brojeva (niz ne sme biti imati vise od 100 elemenata). 
//Napisati program koji na standardni izlaz, na sa tacnoscu od dve decimale ispisuje zbir aritmeticke sredine elemenata sa parnih pozicija i 
//kvadratne sredine elemenata sa neparnih pozicija (koren aritmeticke sredine kvadrata). 
//U slucaju neispravnog ulaza (n<2 ili n>100) na izlaz ispisati -1 i prekinuti program.
#include <stdio.h>
#include <math.h>

int main(){
    int x,i,br1 = 0,br2 = 0; float as = 0,ks = 0;
    scanf("%d", &x);
    int n[x];
    if(x < 2 || x > 100){
        puts("-1");
        return 1;
    }
    for(i = 0; i < x; i++)
        scanf("%d", &n[i]);
    for(i = 0; i< x; i++)
        if(i%2 == 0){
            as += n[i];
            br1++;
        }
        else if(i%2 == 1){
            ks += n[i]*n[i];
            br2++;
        }
    printf("%.2f\n", as/br1 + sqrt(ks/br2));
}
