//Napisati funkciju int zbir(int x) koja određuje zbir prve i poslednje cifre celog broja x. 
//Napisati program koji učitava ceo broj x i ispisuje povratnu vrednost funkcije zbir.
#include <stdio.h>
#include<stdlib.h>

int zbir(int x){
    int p1 = 0,p2 = 0,n = 0;
        for(int i = 0;i < 50; i++){
        if(x/10 > 0){
            if(n == 0)
                p1 = x%10;
            x /= 10;
            p2 = x%10;
            n++;
        }
        else
            p1 = p2 = x;
    }
    printf("%d", p1 + p2);
}

int main(){
    int x;
    scanf("%d", &x);
    x = abs(x);
    zbir(x);
}
