//Napisati program koji ucitava jednu nisku sa standardnog ulaza i ispisuje je sifrovanu na standardni izlaz. Niska se sifruje po sledecim pravilima:

//ukoliko je karakter slovo zameniti ga cifrom koja predstavlja zbir cifara koda tog karaktera
//(npr. a ima kod 97, 9+7=16, 1+6=7, dakle karakter a se sifruje cifrom 7)
//ukoliko je karakter cifra zameniti ga odgovarajucim malim slovom po redosledu u abecedi (0->a, 1->b, ...)
//ostale karaktera ostaviti neizmenjene.
//Napomena: Duzina niske nije veca od 100 karaktera.
#include <stdio.h>
#include <string.h>
#define MAKS 100

void sifra(char s[]){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
            int br = s[i];
            if(br >= 10){
                int j = br%10;
                int d = (br/10)%10;
                int s = (br/100)%10;
                int nbroj = j+d+s;
                if(nbroj >= 10){
                    j = nbroj%10;
                    d = (nbroj/10)%10;
                    nbroj = j+d;
                    printf("%d", nbroj);
                }
                else
                    printf("%d", nbroj);
            }
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            s[i] += 49;
            printf("%c", s[i]);
        }
        else
            printf("%c", s[i]);
    }
}
int main(){
    char s[MAKS];
    scanf("%s", s);
    sifra(s);
    return 0;
}
