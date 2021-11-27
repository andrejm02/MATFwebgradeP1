//Napisati program koji sa standardnog ulaza učitava dve niske od najviše 30 karaktera, a zatim, u slučaju da su niske različite dužine, 
//proverava da li je kraća od učitanih sufiks duže. Ukoliko jeste, na standardni izlaz ispisati indeks duže niske počev 
//od kog se kao sufiks pojavljuje kraća niska, a ukoliko nije ispisati −1. U slučaju da su učitane niske iste dužine ispisati −1. 
//Pretpostaviti da niske ne sadrže beline.
#include <stdio.h>
#include <string.h>

int main(){
    char a[50],b[50],bign[50],smoln[50];
    int br = 0, i, index, j, big, smol;
    scanf("%s%s",a,b);
    if(strlen(a) > strlen(b)){
        big = strlen(a); smol = strlen(b); memcpy(bign, a, strlen(a)); memcpy(smoln, b, strlen(b));
    }
    else{
        big = strlen(b); smol = strlen(a); memcpy(bign, b, strlen(b)); memcpy(smoln, a, strlen(a));
    }
    if(big != smol){
        for(i = 0; i < big; i++){
            for(j = 0; j < smol; j++){
                if(bign[j+i] == smoln[j]){
                    br++;
                }
                else{
                    br = 0;
                }
                if(br == smol && i == 0 || br == smol && i == big - smol){
                    index = big - smol;
                    printf("%d\n",index);
                    return 0;
                }
            }
        }
        puts("-1");
        return 1;
    }
    else{
        puts("-1");
        return 1;
    }
}
