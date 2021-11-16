//Napisati program koji prvo ucitava prirodan broj n sa standardnog ulaza, a zatim n celih petocifrenih brojeva. Program prvo odredjuje
//broj sa najmanjom cifrom desetice, a potom na standardni izlaz ispisuje proizvod cifara tog broja. Ako postoji vise takvih brojeva
//uzeti prvi od njih. Ukoliko su ulazni podaci neispravni, ispisati -1 na standardni izlaz i prekinuti program.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m, j, d, s, h, de, mins, minj, mind = 10, minh, minde;
    scanf("%d", &n);
    if(n <= 0){
        puts("-1");
        return 1;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &m);
        m = abs(m);
        if(m < 1000 || m > 99999){
            puts("-1");
            return 1;
        }
        j = m%10;
        d = (m/10)%10;
        s = (m/100)%10;
        h = (m/1000)%10;
        de = m/10000;
        if(d < mind){
            minj = j;
            mind = d;
            mins = s;
            minh = h;
            minde = de;
        }
    }
    printf("%d\n", minj*mind*mins*minh*minde);
    return 0;
}
