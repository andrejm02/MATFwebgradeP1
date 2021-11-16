//Napisati program koji prvo ucitava prirodan broj n sa standardnog ulaza, a zatim n celih cetvorocifrenih brojeva. Program prvo odredjuje
//broj sa najvecom cifrom stotine, a potom na standardni izlaz ispisuje zbir cifara tog broja. Ako postoji vise takvih brojeva
//uzeti poslednji od njih. Ukoliko su ulazni podaci neispravni, ispisati -1 na standardni izlaz i prekinuti program.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m, j, d, s, h, maxs = 0, maxj, maxd, maxh;
    scanf("%d", &n);
    if(n <= 0){
        puts("-1");
        return 1;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &m);
        m = abs(m);
        if(abs(m) < 100 || abs(m) > 9999){
            puts("-1");
            return 1;
        }
        j = m%10;
        d = (m/10)%10;
        s = (m/100)%10;
        h = m/1000;
        if(s >= maxs){
            maxj = j;
            maxd = d;
            maxs = s;
            maxh = h;
        }
    }
    printf("%d\n", maxj + maxd + maxs + maxh);
    return 0;
}
