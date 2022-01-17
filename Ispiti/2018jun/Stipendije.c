//Definisati strukturu sa nazivom Student koja sadrži podatke o jednom studentu sa osnovnih studija: ime, prezime (niske od najviše 20 karaktera) 
//prosek (realan broj dvostruke tačnosti) i aktuelnu godinu studiranja (ceo pozitivan broj). 
//Napisati program koji izračunava koliko studenata ispunjava uslov za dobijanje stipendije. Da bi student dobio stipendiju, mora imati prosek veći od 9.00
// i mora biti na završnoj (četvrtoj) godini studija. Sa standardnog ulaza učitava se pozitivan broj n(n≤100), a zatim i podaci o n studenata: 
//ime, prezime, prosek i aktuelna godina studiranja, redom za svakog studenta. Ispisati na standardni izlaz koliko studenata ispunjava uslov za dobijanje stipendije.
//Pretpostaviti da su podaci o studentima ispravni, a u slučaju pogrešne vrednosti broja n, ispisati −1 na standardni izlaz.
#include <stdio.h>

typedef struct{

    char ime[20];
    char prezime[20];
    float prosek;
    int god;

}student;

int main(){
    int n,br = 0;
    scanf("%d",&n);

    if(n < 1 || n > 100){
        puts("-1");
        return 1;
    }

    student wowie[100];

    for(int i = 0; i < n; i++){
        scanf("%s %s %f %d",wowie[i].ime,wowie[i].prezime,&wowie[i].prosek,&wowie[i].god);
        if(wowie[i].prosek > 9 && wowie[i].god == 4)
            br++;
    }

    printf("%d\n",br);
}
