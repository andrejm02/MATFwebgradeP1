//Napisati funkciju int prebroj_manje(int x) koja učitava cele brojeve sa standardnog ulaza sve dok korisnik ne unese EOF i prebrojava koliko puta se pojavio
//broj manji od x. Napisati program koji prvo učitava ceo broj x, a zatim testira rad napisane funkcije.
#include <stdio.h>

int prebrojavanje(int x){
    int n,br = 0;
    while(scanf("%d", &n) != EOF)
        if(x > n)
            br++;
    
    printf("%d",br);
}

int main(){
    int x;
    scanf("%d", &x);
    prebrojavanje(x);
    return 0;
}
