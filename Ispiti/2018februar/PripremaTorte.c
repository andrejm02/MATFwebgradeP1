//Definisati strukturu sa nazivom Sastojak koja sadrži podatke o jednom sastojku za pripremu torte: naziv (niska od najviše 20 karaktera) 
//količinu u gramima i cenu za 100 grama (realni brojevi dvostruke tačnosti). Napisati program koji sa standardnog ulaza učitava pozitivan broj n(n≤100)
//a zatim i podatke o n sastojaka potrebnih za pripremu torte: naziv, količinu u gramima i cenu za 100 grama, redom za svaki sastojak. 
//Ispisati na standardni izlaz koliko je novca potrebno za pripremu torte, zaokruženo na dve decimale. U slučaju greške, ispisati −1 na standardni izlaz.
#include <stdio.h>

typedef struct{
    char naziv[20];
    int kol;
    float cena;

}sastojak;

int main(){

    int n;
    float final = 0;
    scanf("%d",&n);
    
    if(n < 1){
        puts("-1");
        return 1;
    }

    sastojak sas[100];

    for(int i = 0; i < n; i++){
        scanf("%s %d %f",sas[i].naziv,&sas[i].kol,&sas[i].cena);
        if(sas[i].cena < 1){
            puts("-1");
            return 1;
        }
        final += (sas[i].kol/100.0) * sas[i].cena;
    }
    printf("%.2f",final);
}
