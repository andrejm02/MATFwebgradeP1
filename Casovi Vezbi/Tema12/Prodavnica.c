//Napisati strukturu PROIZVOD koja sadrzi polje naziv (niska duzine najvise 20 karaktera), cenu (pozitivan realan broj dvostruke tacnosti)
//i tip (karakter i - ishrana; ili h - higijena). Napisati program koji ucitava prirodan broj n, a zatim i podatke o n proizvoda koji se nalaze u prodavnici. 
//Nakon toga, unosi se opcija pretrage koja moze imati vrednosti r i t:
//ukoliko je uneta opcija r, unose se jos dva cela broja a i b, a na standardni izlaz ispisuju se nazivi svih proizvoda cije cene su iz opsega [a, b].
//ukoliko je odabrana opcija t, unosi se jos jedan karakter, a na standardni izlaz ispisuju se nazivi svih proizvoda koji su odabranog tipa.
//U slucaju neispravnih ulaznih podataka ispisati -1. Ukoliko nijedan proizvod ne ispunjava uslove pretrage, ispisati 0.

//Napomena: Pretpostaviti da u prodavnici ima najvise 100 razlicitih proizvoda.
#include <stdio.h>

typedef struct{
    char naziv[20];
    float cena;
    char tip;

}PROIZVOD;

int main(){

    int n,a,b,br = 0;
    char c,d;
    scanf("%d",&n);

    if(n < 1 || n > 100){
        puts("-1");
        return 1;
    }

    PROIZVOD proizvodi[n];

    for(int i = 0; i < n; i++){
        scanf("%s %f %c",proizvodi[i].naziv,&proizvodi[i].cena,&proizvodi[i].tip);
        if(proizvodi[i].cena < 1){
            puts("-1");
            return 1;
        }
    }

    scanf("\n%c",&c);

    if(c == 'r'){
        scanf("%d %d",&a,&b);
        for(int i = 0; i < n; i++){
            if(proizvodi[i].cena >= a && proizvodi[i].cena <= b){
                printf("%s\n",proizvodi[i].naziv);
                br++;
            }
        }
        if(br == 0){
            puts("0");
        }
    }else if(c == 't'){
        scanf("\n%c",&d);
        for(int i = 0; i < n; i++){
            if(proizvodi[i].tip == d){
                printf("%s\n",proizvodi[i].naziv);
                br++;
            }
        }
        if(br == 0){
            puts("0");
        }
    }else{
        puts("-1");
        return 1;
    }
}
