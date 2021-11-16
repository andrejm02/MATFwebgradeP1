\\Napisati program koji za uneti prirodan broj ispituje da li je paran ili ne, i u zavisnosti od toga na ekran ispisuje 0 odnosno 1.
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    if (a%2 == 0)
        b = 0;
    else
        b = 1;
    printf("%d", b);
}
