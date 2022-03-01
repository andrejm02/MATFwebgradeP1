//Napisati program koji učitava karakter c i ispisuje:
//karakter koji sledi nakon karaktera c u ASCII tabeli ukoliko je njegov ASCII kod paran
//karakter koji prethodi karakteru c u ASCII tabeli, inače
//Napomena: Prethodnik prvog karaktera je poslednji karakter ASCII tabele, a sledbenik poslednjeg, prvi karakter ASCII tabele.
#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);
    
    if(c%2 == 0)
        printf("%c\n", c+1);
    else
        printf("%c\n",c-1);
}
