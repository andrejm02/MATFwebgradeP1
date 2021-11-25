//Napisati program koji za uneto n ispisuje harmonijsku sredinu prvih n prirodnih brojeva (počev od 1) izracunatu na 6 decimala.
//Koristiti realne brojeve dvostruke tačnosti. U slučaju greške, na standardni izlaz ispisati -1.
#include <stdio.h>

int main()
{
    int a,i = 1;
    double sr;
    scanf("%d", &a);
    if (a<= 0){
        puts("-1");
        return 1;
    }
    while (i <= a){
        int broj = 0;
        broj += i;
        sr += 1.0/broj;
        i++;
    }
    printf("%.6lf\n", a/sr);
}
