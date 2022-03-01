//Napisati program koji racuna broj mutacija u dnk. Sa standardnog ulaza ucitavaju se dve niske (prvi i drugi lanac), duzine najvise 100, a na standardi
//izlaz ispisuje se broj mutacija.
//Uputstvo: Dnk lanci treba da budu komplementarni. Lanci su komplementarni ukoliko na istim pozijima u niskama nalaze komplementarni nukleotidi. 
//Komplementarni su nukleotidi A i T, kao i nukleotidi C i G. Svaka pozicija na kojoj se ne nalaze komplementarni nukleotidi predstavlja jednu mutaciju.
#include <stdio.h>
#include <string.h>
#define MAKS 100

void compare(char s[], char d[]){
    int br = 0;
    for(int i = 0; i < strlen(s); i++){
        //Ukoliko se desi da ni jedan od ovih uslova u if naredbi nije ispunjen tada se brojac za mutacije uvecava
        if(!((s[i] == 'a' && d[i] == 't') || (s[i] == 't' && d[i] == 'a') || (s[i] == 'g' && d[i] == 'c') || (s[i] == 'c' && d[i] == 'g'))){
            br++;
        }
    }
    printf("%d\n", br);
}

int main(){
    char a[MAKS], b[MAKS];
    scanf("%s%s",a,b);
    
    compare(a,b);
}
