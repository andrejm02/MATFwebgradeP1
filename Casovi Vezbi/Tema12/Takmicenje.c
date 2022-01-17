//Definisati strukturu TAKMICAR koja sadrzi polja ime (niska duzine najvise 30 karaktera) i poeni (realan broj dvostruke tacnosti, izmedju 0 i 100). 
//Napisati program koji ucitava ceo broj n, a zatim i podatke o n takmicara. Na standardni izlaz ispisati imena takmicara koji su 
//zauzeli redom prvo, drugo i trece mesto prema broju poena.

//Napomena: Pretpostaviti da svi takmicari imaju razlicit broj poena. Takmicara nece biti vise od 100, a najmanje ih je 3.
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char ime[30];
    float poeni;
}TAKMICAR;

int cmp(const void* tak1,const void* tak2){
    TAKMICAR* t1 = (TAKMICAR*)tak1;
    TAKMICAR* t2 = (TAKMICAR*)tak2;

    if(t1->poeni < t2->poeni)
        return -1;
    else if(t1->poeni > t2->poeni)
        return 1;
    else
        return 0;
}

int main(){
    int n;
    TAKMICAR takmicari[100];
    scanf("%d",&n);
    if(n < 3){
        puts("-1");
        return 1;
    }
    for(int i = 0; i < n; i++){
        scanf("%s %f",takmicari[i].ime,&takmicari[i].poeni);
        if(takmicari[i].poeni < 0 || takmicari[i].poeni > 100){
            puts("-1");
            return 1;
        }
    }
    
    qsort(&takmicari[0], n, sizeof(TAKMICAR), cmp);

    for(int i = n-1; i > n-4; i--){
        printf("%s ",takmicari[i].ime);
    }
}
