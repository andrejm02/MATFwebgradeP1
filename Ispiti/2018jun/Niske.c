//Napisati program koji sa standardnog ulaza učitava dve niske s i t (niske bez belina od najviše 100 karaktera)
//a na standardni izlaz ispisuje dužinu početnog dela niske s sastavljenog isključivo od karaktera sadržanih u niski t.
#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100], c[100];
    int br = 0;
    scanf("%s%s",a,b);
    for(int i = 0; i < strlen(b); i++)
        for(int j = 0; j < strlen(b); j++)
            if(a[i] == b[j])
                c[i] = b[j];
    printf("%ld\n",strlen(c));
}
