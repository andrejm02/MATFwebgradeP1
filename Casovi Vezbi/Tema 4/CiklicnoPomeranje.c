//Napisati program koji ucitava pozitivan cetvorocifren broj i ispisuje broj
//koji se dobija ciklicnim pomeranjem cifara broja u desno za jednu poziciju.
//Napomena: Pretpostaviti da je unos ispravan.
#include <stdio.h>

int main()
{
    int broj, noviBroj;
    scanf("%d", &broj);
    int jedinica, desetica, stotina, hiljadarka;
    jedinica = broj%10;
    desetica = (broj/10)%10;
    stotina = (broj/100)%10;
    hiljadarka = broj/1000;
    noviBroj = jedinica * 1000 + desetica * 1 + stotina * 10 + hiljadarka * 100;
    printf("%d", noviBroj);
}
