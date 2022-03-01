//Napisati program koji ucitava ceo broj n, veci od 1, a onda i n realnih brojeva jednostruke tacnosti.
//Program ispisuje 1 ukoliko ucitani brojevi formiraju geometrijski niz, u suprotnom 0. U slucaju neispravnih ulaznih podataka ispisati -1.
#include <stdio.h>
#include <math.h>

int main(){
    int n,x = 0;
    float c, q = 1, copyq, copyc;
    scanf("%d", &n);
    
    if(n <= 1){
        puts("-1");
        return 1;
    }
    for(int i = 0; i < n; i++){
        scanf("%f", &c);
        
        if(i != 0)
            q = c/copyc;
        if(copyq == q)
            x++;
        copyq = q;
        copyc = c;
    }
    if (x == n-2)
        puts("1");
    else
        puts("0");
}
