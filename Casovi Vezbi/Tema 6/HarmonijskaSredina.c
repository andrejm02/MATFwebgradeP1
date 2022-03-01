//Napisati program koji za uneto n ispisuje harmonijsku sredinu prvih n prirodnih brojeva (počev od 1) izracunatu na 6 decimala.
//Koristiti realne brojeve dvostruke tačnosti. U slučaju greške, na standardni izlaz ispisati -1.
#include <stdio.h>

int main()
{
    int n;
    double sredina;
    scanf("%d", &n);
    
    if (n <= 0){
        puts("-1");
        return 1;
    }
    for(int i = 1;i <= n; i++){
        int broj = 0;
        broj += i;
        sredina += 1.0/broj;
    }
    printf("%.6lf\n", n/sredina);
}
