//Napisati program koji sa standardnog ulaza ucitava karakter op koji predstavlja opciju, a zatim jos cetiri karaktera koje treba obraditi
//u zavisnosti od ucitane opcije. Opcija i karakteri su razdvojeni jednom prazninom. Ukoliko je karakter op jednak karakteru:
//C: ukoliko medju karakterima za obradu (ne ukljucujuci karakter op) postoje cifre, ispisati njihov proizvod na standardni izlaz 
//a u slucaju da medju karakterima za obradu nema cifara, ispisati 0 na standardni izlaz;
//V: ispisati na standardni izlaz broj pojavljivanja velikih slova medju karakterima za obradu (ne ukljucujuci karakter op )
//Ukoliko je ucitana neispravna opcija, ispisati −1 na standardni izlaz i prekinuti program.
#include <stdio.h>
#include <stdlib.h>

int main(){
    char a,b,c,d,e;
    int i = 0;
    scanf("%c %c%c%c%c", &a, &b,&c,&d,&e);
    if (a != 'C' && a != 'V'){
        puts("-1");
        return 1;
    }
    if (a == 'C'){
        int broj = 1;
        if (b >= '0' && b <= '9')
            broj *= (b - 48);
        else
            i++;
        if (c >= '0' && c <= '9')
            broj *= (c - 48);
        else
            i++;
        if (d >= '0' && d <= '9')
            broj *= (d - 48);
        else
            i++;  
        if (e >= '0' && e <= '9')
            broj *= (e - 48);
        else
            i++;
        if (i == 4){
            puts("0");
            return 0;
        }else{
        printf("%d\n", broj);
        return 0;
        }       
    }
    if (a == 'V'){
        if (b >= 'A' && b<= 'Z')
            i++;
        if (c >= 'A' && c<= 'Z')
            i++;
        if (d >= 'A' && d<= 'Z')
            i++;
        if (e >= 'A' && e<= 'Z')
            i++;
        printf("%d\n", i);
    }
}
