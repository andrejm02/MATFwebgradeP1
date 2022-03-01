//Napisati program koji sa standardnog ulaza ucitava pozitivan ceo broj n, a na stanrdani izlaz ispisuje prvih n clanova Fibonacijevog niza.
//Prva dva elementa su 0 i 1, a svaki sledeci dobija se sabiranjem prethodna dva. U slucaju neispravnih ulaznih podataka ispisati -1.
#include <stdio.h>

int main(){
    int n, p = 0, s = 0, x = 1;
    scanf("%d", &n);
    
    if(n <= 0){
        puts("-1");
        return 1;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", s);
        p = s;
        s = x;
        x = p + s;       
    }
}
