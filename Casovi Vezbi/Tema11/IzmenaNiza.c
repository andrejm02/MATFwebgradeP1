//Sa standardnog ulaza unosi se broj n, a zatim i n elemenata niza celih brojeva a (niz a ne sme biti imati vise od 100 elemenata). 
//Potom se sa standardnog ulaza ucitava n elemenata koji predstavljaju indekse niza a. Napisati funckiju void premesti(int a[], int indeksi[], int n) 
//koja menja niz a, tako sto iskoristi nove indekse date drugim ucitanim nizom 
//(element na i-toj poziciji niza a, posle premestanja, bice element koji je se nalazio na indeksii poziciji pre premestanja). 
//Ispisati niz a posle izmena. U slucaju greske ispisati -1 i prekinuti program (neki od indeksa nije validan, ili n nije validno).
#include <stdio.h>

void premesti(int niz1[100],int niz2[100], int n){

    int nizc[100];
    
    for(int i = 0; i < n; i++){
        nizc[i] = niz1[i]; 
        nizc[i] = niz1[niz2[i]];
        printf("%d ",nizc[i]);
    }
}

int main(){

    int n, niz1[100], niz2[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &niz1[i]);
    }

    for(int i = 0; i < n; i++)
        scanf("%d", &niz2[i]);

    if(n <= 0){
        puts("-1");
        return 1;
    }

    for(int i = 0; i < n; i++){
        if(niz2[i] >= n){
            puts("-1");
            return 1;
        }
    }

    premesti(niz1,niz2,n);
    return 0;
}
