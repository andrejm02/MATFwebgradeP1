//Napisati program koji sa standardnog ulaza učitava nisku s (niska bez belina od najviše 30 karaktera) i karakter c, a na standardni izlaz ispisuje modifikaciju niske s ukoliko niska s sadrži karakter c, inače nisku s bez modifikacija. Modifikacija niske s se dobija njenom podelom na:
//prvi deo: od početka niske s do prvog pojavljivanja karaktera c (uključujući i njega)
//drugi deo: od prvog pojavljivanja karaktera c (ne uključujući ga) do kraja niske s
//Zatim se ovi delovi spoje, tako da na početak ide drugi deo, a zatim prvi.
#include <stdio.h>
#include <string.h>

int main(){
    char s[30], c,br1,br2,no = 0;
    scanf("%s %c",s,&c);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == c){
            br1 = strlen(s) - i - 1;
            br2 = strlen(s) - br1;
            i = strlen(s);
        }
        else
            no++;
    }
    if(no == strlen(s)){
        printf("%s\n",s);
        return 0;
    }
    for(int i = br2; i < strlen(s); i++){
        printf("%c",s[i]);
    }
    for(int i = 0; i < br2; i++){
        printf("%c",s[i]);
    }
}
