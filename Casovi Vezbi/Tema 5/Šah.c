//Polje šahovske table se definiše parom celih brojeva (x,y), 1 <= x,y <= 8, gde je x redni broj reda, a y redni broj kolone.
//Ako su dati takvi parovi, napisati program koji proverava:
//da li su polja (k, l) i (m, n) iste boje
//da li kraljica sa (k, l) ugrožava polje (m, n)
//da li konj sa (k, l) ugrožava polje (m, n)
//Pretpostaviti da je polje (1,1) crno i da predstavlja donji levi ugao šahovske table. Sa ulaza se učitavaju 4 cela broja
//k, l, m i n. Na izlaz ispisati odgovarajuće poruke (pogledati test primere). U slučaju neispravnog unosa, ispisati -1 i prekinuti izvršavanje programa.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int k,l,m,n;
    scanf("%d %d %d %d", &k,&l,&m,&n);
    int razlika1 = k - m;
    int razlika2 = l-n;
    
    if ((k == m && l == n) || k < 1 || k > 8 || l < 1 || l > 8 || m < 1 || m > 8 || n < 1 || n > 8){
        puts("-1");
        return 1;
    }
    
    //Provera boja polja
    if ((k%2 == m%2) && (l%2 == n%2))
        printf("Polja su iste boje.\n");     
    else if(!(k%2 == m%2) && !(l%2 == n%2))
        printf("Polja su iste boje.\n");    
    else
        printf("Polja su razlicite boje.\n");
    
    //Provera za kraljicu
    if ((k == m) || (l == n) || (abs(razlika1) == abs(razlika2)))
        printf("Kraljica sa (%d,%d) ugrozava polje (%d,%d).\n", k,l,m,n);
    else
        printf("Kraljica sa (%d,%d) ne ugrozava polje (%d,%d).\n",k,l,m,n);
    
    //Provera za konja
    if (abs(k-m) == 1 && abs(l - n) == 2 || abs(k-m) == 2 && abs(l - n) == 1)
        printf("Konj sa (%d,%d) ugrozava polje (%d,%d).\n",k,l,m,n);
    else
        printf("Konj sa (%d,%d) ne ugrozava polje (%d,%d).\n",k,l,m,n);
    return 0;
}
