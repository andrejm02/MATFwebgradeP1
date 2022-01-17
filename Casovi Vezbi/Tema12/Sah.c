//Definisati strukturu SAH koja sadrzi tri polja: figura (niska duzine najvise 10 karaktera), red (ceo broj iz opsega [1, 8]) 
//i kolona (karakter - malo slovo od 'a' do 'h'). Napisati funkciju int napada(SAH *f1, SAH *f2) koja vraca 1, ako f1 napada f2, u suprotnom vraca 0. 
//Napisati program koji ucitava dve figure i njihove pozicije na tabli i ispisuje da li prva napada drugu, a zatim i da li druga napada prvu.

//Napomena: Moguce figure su kraljica, lovac, top i konj. Pretpostaviti da unos svih podataka korektan.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char figura[10],kolona;
    int red;
}SAH;

int napada(SAH *f1, SAH *f2){
    if(strcmp(f1->figura,"kraljica") == 0){
        if(f1->red == f2->red || f1->kolona == f2->kolona || abs(f1->red - f2->red) == abs((int)f1->kolona - (int)f2->kolona)){
            puts("1");
            return 1;
        }else{
            puts("0");
            return 0;
        }
    }
    if(strcmp(f1->figura,"konj") == 0){
        if((abs(f1->red - f2->red) == 1 && abs((int)f1->kolona - (int)f2->kolona) == 2) || (abs(f1->red - f2->red) == 2 && abs((int)f1->kolona - (int)f2->kolona) == 1)){
            puts("1");
            return 1;
        }else{
            puts("0");
            return 0;
        }
    }
    if(strcmp(f1->figura,"lovac") == 0){
        if(abs(f1->red - f2->red) == abs((int)f1->kolona - (int)f2->kolona)){
            puts("1");
            return 1;
        }else{
            puts("0");
            return 0;
        }
    }
    if(strcmp(f1->figura,"top") == 0){
        if(f1->red == f2->red || f1->kolona == f2->kolona){
            puts("1");
            return 1;
        }else{
            puts("0");
            return 0;
        }
    }
}

int main(){
    SAH a,b;
    scanf("%s %d %c",a.figura,&a.red,&a.kolona);
    scanf("%s %d %c",b.figura,&b.red,&b.kolona);
    napada(&a,&b);
    napada(&b,&a);
}
