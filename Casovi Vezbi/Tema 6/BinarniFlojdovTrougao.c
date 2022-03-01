//Napisati program koji za uneto n (validno isključivo 0<=n<100) ispisuje Binarni Flojdov trougao. Svaki red sadrži karakter ~
//pa odgovarajuću sekvencu nula i jedinica, pa onda opet karakter ~. Zbog centriranja prikaza test primera, trougao izgleda 
//kao da ima beline na početku, ali ih zapravo nema. U slucaju greške ispisati -1 na standardni izlaz.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, j = 0, i;
    char a = '~', b = '0', c = '1';
    scanf("%d", &n);
    
    if(n > 100 || n <= 0){
        puts("-1");
        return 1;
    }
    
    for(i = 0; i < n; i++){
        putchar(a);
        for(j = 0; j <= i; j++){
            if(((j%2 == 0) && (i%2 == 0)) ||((j%2 == 1) && (i%2 == 1))){
                putchar(c);
            }
            else{
                putchar(b);
            }
        }
        putchar(a);
        putchar('\n');
    }
}
