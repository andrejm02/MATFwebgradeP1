//Državna lutrija došla je na ideju o novoj igri na sreću. Ova igra na sreću igra se tako što se izvuče jedan broj od 1000 do 9999.
//Nagrada koja se dobija ako ste pogodili izvučen broj je proizvod njegovih parnih cifara i samog broja. Vaš zadatak je da na osnovu
//izučenog broja izračunate nagradu koja se dobija. Kao ulaz sigurno ćete dobiti ispravan broj. Ako broj nema parnih cifara, nagrada 
//je sam taj broj. Na standardni izlaz ispišite nagradu.
#include <stdio.h>

int main(){
    int broj;
    scanf("%d", &broj);
    if (broj >1000 && broj <9999){
        int j = broj%10;
        int d = (broj/10)%10;
        int s = (broj/100)%10;
        int h = broj/1000;
        int nbroj = broj;
        if (j%2 == 0)
            nbroj *= j;
        if (d%2 == 0)
            nbroj *= d;
        if (s%2 == 0)
            nbroj *= s;
        if (h%2 == 0)
            nbroj *= h;
        printf("%d\n", nbroj);
    }
}
