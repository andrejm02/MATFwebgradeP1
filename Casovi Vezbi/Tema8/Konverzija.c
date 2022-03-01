//Napisati funkciju int konverzija(char x) koja vraća poslednju cifru ASCII koda karaktera x. Napisati program koji učitava karaktere sa standardnog ulaza
//sve dok korisnik ne unese EOF i za svaki učitan karakter ispisuje povratnu vrednost funkcije konverzija.
#include <stdio.h>

int konverzija(char x){
    int n = x;
    printf("%d", n%10);
}

int main(){
    char x;
    while(scanf("%c", &x) != EOF)
        konverzija(x);
    
    return 0;
}
