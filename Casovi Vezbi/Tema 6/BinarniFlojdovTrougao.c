//Napisati program koji za uneto n (validno isključivo 0<n<100) ispisuje Binarni Flojdov trougao. Svaki red sadrži karakter ~
//pa odgovarajuću sekvencu nula i jedinica, pa onda opet karakter ~. Zbog centriranja prikaza test primera, trougao izgleda 
//kao da ima beline na početku, ali ih zapravo nema. U slucaju greške ispisati -1 na standardni izlaz.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j = 0,i;
    char a = '~';
    char b = '0';
    char c = '1';
    scanf("%d", &n);
    if(n > 100 || n <= 0){
        puts("-1");
        return 1;
    }
    for(i = 0; i < n; i++){
        j = 0;
        putchar(a);
        if(i%2 == 0){
            while(j <= i){
                if(j%2 == 0){
                    putchar(c);
                }
                if(j%2 == 1){
                    putchar(b);
                }
                j++;
            }
        }
        if(i%2 == 1){
            while(j <= i){
                if(j%2 == 0){
                    putchar(b);
                }
                if(j%2 == 1){
                    putchar(c);
                }
                j++;
        }
    }
        putchar(a);
        putchar('\n');
    }
}
