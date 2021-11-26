//Napisati program koji ucitanu rnk sekvencu, duzine najvise 39 karaktera, ispisuje u kompresovanom obliku. 
//Niska se kompresuje tako sto se pronalaze podniske duzine 3 i zamenjuju brojem uzastopnih pojavljuja i jednom kopijom podniske.
//Napomena: Pretpostaviti da je duzina niska deljiva brojem 3.
#include <stdio.h>
#include <string.h>

int main(){

    char a[50],s[50], d[50];
    int br = 0,br1 = 0,br2 = 0;
    scanf("%s", a);
    for(int i = 0; i < strlen(a); i += 3){
        s[i] = a[i]; s[i+1] = a[i+1]; s[i+2] = a[i+2];
        d[i] = a[i+3]; d[i+1] = a[i+4]; d[i+2] = a[i+5];
        if(s[i] == d[i] && s[i+1] == d[i+1] && s[i+2] == d[i+2]){
            br++;
            br1++;
            br2 = 0;
        }
        else{
            br = 0;
            br2++;
        }
        if(br == 0 && br1 != 0){
            printf("%d%c%c%c",br1+1,s[i],s[i+1],s[i+2]);
            br1 = 0;
        }
        else if(br == 0 && br2 != 0){
            printf("1%c%c%c",s[i],s[i+1],s[i+2]);
        }
    }
}
