//Definisati strukturu sa nazivom Film koja sadrži podatke o jednom filmu: naziv, žanr (niske od najviše 20 karaktera) 
//i prosečnu ocenu filma (realan broj dvostruke tačnosti). Napisati program koji korisniku preporučuje najbolje ocenjen film odabranog žanra. 
//Sa standardnog ulaza učitava se pozitivan broj n(n≤100), a zatim i podaci o n filmova: naziv, žanr i prosečna ocena, redom za svaki film. 
//Nakon toga, korisnik unosi željeni žanr (niska od najviše 20 karaktera). Na standardni izlaz ispisati film tog žanra koji ima najveću prosečnu ocenu. 
//Ukoliko ne postoji film zadatog žanra, ispisati −1. Ukoliko ima više filmova koji ispunjavaju uslov, ispisati prvi takav medu učitanim. 
//Pretpostaviti da su podaci o filmovima ispravni, a u slučaju pogrešne vrednosti broja n, ispisati −1 na standardni izlaz.
#include <stdio.h>
#include <string.h>

typedef struct{

    char ime[20],zanr[20];
    float rate;

}film;

int main(){

    int n,win = 0;
    float max = 0;
    scanf("%d",&n);

    if(n < 1 || n > 100){
        puts("-1");
        return 1;
    }

    film filmici[100];
    
    for(int i = 0; i < n; i++)
        scanf("%s %s %f",filmici[i].ime,filmici[i].zanr,&filmici[i].rate);

    char zanr1[20];
    scanf("%s",zanr1);

    for(int i = 0; i < n; i++){
        if(strcmp(filmici[i].zanr,zanr1) == 0 && filmici[i].rate > max){
            win = i;
            max = filmici[i].rate;
        }
    }

    if(strcmp(filmici[win].zanr,zanr1) == 0){
        printf("%s",filmici[win].ime);
        return 0;
    }else
        puts("-1");
}
