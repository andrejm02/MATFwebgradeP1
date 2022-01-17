//Definisati strukturu sa nazivom BMI koja sadrži ime i prezime osobe (niske od najviše 20 karaktera), visinu u metrima i masu u 
//kilogramima (realni brojevi dvostruke tačnosti). Indeks telesne mase (BMI ) za neku osobu dobija se tako što se masa osobe u kilogramima podeli 
//sa kvadratom visine u metrima. Napisati program koji učitava prirodan broj n(n≤100), a zatim i podatke o n osoba (ime, prezime, visina, masa). 
//Pretpostaviti da su podaci o osobama ispravni. Nakon toga učitava se broj koji predstavlja kategoriju i može biti: 1 za BMI<18.5, 2 za BMI∈[18.5,25)
//3 za BMI∈[25,30) i 4 za BMI≥30. Na standardni izlaz potrebno je ispisati imena i prezimena svih osoba iz zadate kategorije u redosledu u kom su učitani. 
//U slučaju greške, ispisati −1.
#include <stdio.h>

typedef struct{
    char ime[20],prezime[20];
    float h,w,s;

}BMI;

int main(){

    int n,m;
    scanf("%d",&n);

    if(n < 1){
        puts("-1");
        return 1;
    }

    BMI osoba[100];

    for(int i = 0; i < n; i++){
        scanf("%s %s %f %f",osoba[i].ime,osoba[i].prezime,&osoba[i].h,&osoba[i].w);
        osoba[i].s = osoba[i].w / (osoba[i].h * osoba[i].h);
    }

    scanf("%d",&m);

    if(m > 4 || m < 1){
        puts("-1");
        return 1;
    }

    for(int i = 0; i < n; i++){
        if(osoba[i].s < 18.5 && m == 1)
            printf("%s %s\n",osoba[i].ime,osoba[i].prezime);
        else if(osoba[i].s >= 18.5 && osoba[i].s < 25 && m == 2)
            printf("%s %s\n",osoba[i].ime,osoba[i].prezime);
        else if(osoba[i].s >= 25 && osoba[i].s >= 25 && osoba[i].s < 30 && m == 3)
            printf("%s %s\n",osoba[i].ime,osoba[i].prezime);
        else if(osoba[i].s >= 30 && m == 4)
            printf("%s %s\n",osoba[i].ime,osoba[i].prezime);
    }
}
