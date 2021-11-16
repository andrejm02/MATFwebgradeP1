//Napisati program koji sa standardnog ulaza ucitava karakter op koji predstavlja opciju, a zatim jos pet karaktera koje treba obraditi u 
//zavisnosti od ucitane opcije. Ukoliko je karakter op jednak karakteru:
//C: ukoliko medju karakterima za obradu (ne ukljucujuci karakter op) postoje cifre, ispisati njihov zbir na standardni izlaz
//a u slucaju da medju karakterima za obradu nema cifara, ispisati 0 na standardni izlaz.
//M : ispisati na standardni izlaz broj pojavljivanja malih slova medju karakterima za obradu (ne ukljucujuci karakter op). 
//Ukoliko je ucitana neispravna opcija, ispisati −1 na standardni izlaz i prekinuti program.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b,c,d,e,f;
    int i = 0;
    scanf("%c %c%c%c%c%c", &a, &b,&c,&d,&e,&f);
    if (a != 'C' && a != 'M'){
        puts("-1");
        return 1;
    }
    if (a == 'C'){
        int broj = 0;
        if (b >= '0' && b <= '9')
            broj += (b - 48);
        else
            i++;
        if (c >= '0' && c <= '9')
            broj += (c - 48);
        else
            i++;
        if (d >= '0' && d <= '9')
            broj += (d - 48);
        else
            i++;  
        if (e >= '0' && e <= '9')
            broj += (e - 48);
        else
            i++;
        if (f >= '0' && f <= '9')
            broj += (f - 48);
        else
            i++;
        if (i == 5){
            puts("0");
            return 0;
        }else{
        printf("%d\n", broj);
        return 0;
        }       
    }
    if (a == 'M'){
        if (b >= 'a' && b<= 'z')
            i++;
        if (c >= 'a' && c<= 'z')
            i++;
        if (d >= 'a' && d<= 'z')
            i++;
        if (e >= 'a' && e<= 'z')
            i++;
        if (f >= 'a' && f<= 'z')
            i++;
        printf("%d\n", i);
    }
}
