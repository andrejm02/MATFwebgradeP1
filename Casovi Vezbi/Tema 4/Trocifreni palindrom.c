//Napisati program koji ucitava ceo trocifreni broj i proverava da li je ucitani broj palindrom.
//Ukoliko je broj palindrom ispisati 1, u suprotnom ispisati 0. Broj je palindrom ukoliko se isto cita sa leve i sa desne strane.
//Napomena: Pretpostaviti da je unos ispravan.
#include <stdio.h>

int main()
{
int broj, b;
    scanf("%d", &broj);
    int jedinica, desetka, stotka, nbroj;
    jedinica = broj%10;
    desetka = (broj/10)%10;
    stotka = (broj/100)%10;
    if (jedinica == stotka)
        b = 1;
    else
        b = 0;
    printf("%d\n", b);
}
