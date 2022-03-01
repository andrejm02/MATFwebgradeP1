//Napisati program koji ucitanu rnk sekvencu, duzine najvise 39 karaktera, ispisuje u kompresovanom obliku. 
//Niska se kompresuje tako sto se pronalaze podniske duzine 3 i zamenjuju brojem uzastopnih pojavljuja i jednom kopijom podniske.
//Napomena: Pretpostaviti da je duzina niska deljiva brojem 3.
#include <stdio.h>
#include <string.h>
#define MAX 40

int main(){

    char a[MAX],s[MAX], d[MAX];
    //Svrha br1 je da naznaci kada treba da se stampa deo niza
    int br1 = 0,br2 = 0,br3 = 0;
    scanf("%s", a);
    
    for(int i = 0; i < strlen(a); i += 3){
        //Niz s uzima vrednosti naredna tri karaktera iz niza a, niz d uzima vrednosti naredna tri +3 karaktera iz niza a
        s[i] = a[i]; s[i+1] = a[i+1]; s[i+2] = a[i+2];
        d[i] = a[i+3]; d[i+1] = a[i+4]; d[i+2] = a[i+5];
        
        if(s[i] == d[i] && s[i+1] == d[i+1] && s[i+2] == d[i+2]){
            br1++; br2++; br3 = 0;
        }
        else{
            br1 = 0; br3++;
        }
        if(br1 == 0 && br2 != 0){
            printf("%d%c%c%c",br2+1,s[i],s[i+1],s[i+2]);
            br2 = 0;
        }
        else if(br1 == 0 && br3 != 0){
            printf("1%c%c%c",s[i],s[i+1],s[i+2]);
        }
    }
}
