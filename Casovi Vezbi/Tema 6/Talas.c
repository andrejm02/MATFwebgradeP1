//Napisati program koji učitava broj n a zatim n brojeva sa ulaza. U slučaju da uneti brojevi obrazuju 'talas' na izlaz ispisuje 1, inače 0. 
//Niz brojeva predstavlja talas ako vazi a1 < a2 > a3 < a4 > a5 < ... ili a1 > a2 < a3 > a4 < a5 > ... U slučaju greške ispisati -1 i prekinuti program.
#include <stdio.h>
int main() {
    int x,copy1 = -1000, c, d, n = 0, m = 0;
    scanf("%d", &x);
    if(x < 0){
        puts("-1");
        return 1;
        }
    for(int i = 0; i < x; i++){
        scanf("%d", &c);
        if(c > copy1 && i != 0){
            n++;
            m = 0;
            if(n == 2){
                puts("0");
                return 1;
            }
        }
        else if (c < copy1 && i != 0){
            m++;
            n = 0;
            if(m == 2){
                puts("0");
                return 1;
            }
        }
        copy1 = c;
    }   
        if(m == n+1|| n == m+1)
                puts("1");
        else if(x == 1 && m == 0 && n == 0)
            puts("1");
        else
            puts("0");
        return 0;
}
