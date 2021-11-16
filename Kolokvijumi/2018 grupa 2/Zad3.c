//Napisati program koji prvo učitava prirodan broj n, a zatim n celih trocifrenih brojeva. Program određuje poslednji među učitanim brojevima
//čije su cifre uređene strogo opadajuće (čitajući cifre sa leva na desno), a potom na standardni izlaz ispisuje najmanju cifru u zapisu tog broja.
//Ukoliko takav broj ne postoji, ispisati broj koji je poslednji učitan na standardni izlaz. Ukoliko je učitana neispravna vrednost za n ili neki od
//narednih brojeva nisu trocifreni, ispisati -1 na standardni izlaz i prekinuti program.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m,j,d,s,yes = 0, max;
    scanf("%d", &n);
    if(n <= 0){
        puts("-1");
        return 1;
    }
    for (int i = 0; i < n; i++){
        scanf("%d", &m);
        m = abs(m);
        if(m < 100 || m > 999){
            puts("-1");
            return 1;
        }
        j = m%10; d = (m/10)%10; s = (m/100)%10;
        if(j < d && d < s){
            yes = 1;
            max = j;
        }       
    }
    if(yes == 1){
        printf("%d", max);
        return 0;
    }
    else if(yes == 0){
        printf("%d", m);
        return 0;
    }
}
