//Napisati program koji ucitava pozitivan cetvorocifren broj i ispisuje broj
//koji se dobija ciklicnim pomeranjem cifara broja u desno za jednu poziciju.
//Napomena: Pretpostaviti da je unos ispravan.
#include <stdio.h>

int main()
{
    int broj, nbroj;
    scanf("%d", &broj);
    int jedinica, desetka, stotka, hiljadarka;
    jedinica = broj%10;
    desetka = (broj/10)%10;
    stotka = (broj/100)%10;
    hiljadarka = broj/1000;
    nbroj = jedinica * 1000 + desetka * 1 + stotka * 10 + hiljadarka * 100;
    printf("%d", nbroj);
}
