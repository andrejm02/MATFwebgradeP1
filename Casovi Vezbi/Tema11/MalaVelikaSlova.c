//Napisati program koji ako medju argumentima komandne linije ima vise malih nego velikih slova, na izlaz ispisuje 'a', ako je medju argumentima
//komandne linije vise velikih nego malih, ispisuje 'A' inace se na izlaz ispisuje 0. Ako je program pozvan bez argumenta, ispisati -1.
#include <stdio.h>
#include <ctype.h>

int main(int argc,char *argv[]){
    int br1 = 0,br2 = 0,i,j;
    
    if(argc == 1){
        puts("-1");
        return 1;
    }
    
    for(i = 1; i < argc; i++){
        for(j = 0; argv[i][j];j++){
            if(isupper(argv[i][j]))
                br1++;
            else if(islower(argv[i][j]))
                br2++;
        }    
    }
    
    if(br1 > br2)
        puts("A");
    else if(br2 > br1)
        puts("a");
    else
        puts("0");
    return 0;
}
