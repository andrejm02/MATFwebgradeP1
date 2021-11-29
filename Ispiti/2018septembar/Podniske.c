//Napisati program koji sa standardnog ulaza učitava dve niske s i t (niske bez belina od najviše 100 karaktera)
//a na standardni izlaz ispisuje broj pojavljivanja niske t u niski s, računajući i samopreklapanja niske t (pogledati prvi primer).
#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100], c[100];
    int br = 0,br1 = 0;
    scanf("%s%s",a,b);
    for(int i = 0; i < strlen(a); i++){
        for(int j = 0; j < strlen(b); j++)
            if(a[j+i] == b[j])
                br++;
            else
                br = 0;
        if(br == strlen(b))
            br1++;
        br = 0;
    }
    printf("%d\n",br1);
}
