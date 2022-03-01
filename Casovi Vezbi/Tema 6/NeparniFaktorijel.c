//Napisati program koji za uneti pozitivan broj n ispisuje 'neparni faktorijel' broja n, u oznaci n!!, kao broj koji se računa po formuli:
//n!! = n*(n-2)*...*2 za slučaj da je n paran broj, odnosno n!! = n*(n-2)*...*1 za slučaj neparnog n.
//U slučaju greške na standardni izlaz ispisati -1 i prekinuti program.
#include <stdio.h>

int main(){
    int n, m, broj = 1;
    scanf("%d", &n);
    m = n;
    
    if(n<=0){
        puts("-1");
        return 1;
    }    
    if (n%2 == 0){
        while (m >= 2){
            broj = n*broj;
            m -= 2;
            n -= 2;
        }        
    }else{
        while (m >= 1){
            broj = n*broj;
            m -= 2;
            n -= 2;
        }        
    }
    printf("%d\n", broj);
}
