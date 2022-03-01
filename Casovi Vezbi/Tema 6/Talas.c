//Napisati program koji učitava broj n a zatim n brojeva sa ulaza. U slučaju da uneti brojevi obrazuju 'talas' na izlaz ispisuje 1, inače 0. 
//Niz brojeva predstavlja talas ako vazi a1 < a2 > a3 < a4 > a5 < ... ili a1 > a2 < a3 > a4 < a5 > ... U slučaju greške ispisati -1 i prekinuti program.
#include <stdio.h>
int main() {
    int n,copy1 = -1000, broj, y = 0, x = 0;
    //x je brojac za sve brojeve koji su veci od prethodnog, y je brojac za sve brojeve koji su manji od prethodnog
    scanf("%d", &n);
    
    if(n < 0){
        puts("-1");
        return 1;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &broj);

        if(broj > copy1 && i != 0){
            x++;
            y = 0;
        }else if (broj < copy1 && i != 0){
            y++;
            x = 0;
        }
        if(x == 2 || y == 2){
            puts("0");
            return 1;
        }
        copy1 = broj;
    }   
    if(y == x+1|| x == y+1 || (n == 1 && y == 0 && x == 0))
        puts("1");
    else
        puts("0");

    return 0;
}
