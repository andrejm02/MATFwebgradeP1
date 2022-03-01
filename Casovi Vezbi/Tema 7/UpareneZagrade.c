//Napisati program koji ucitava karaktere do kraja ulaza. Program proverava da li su uglaste zagrade ispravno uparene i ako jesu ispisuje 1
//a u suprotnom ispisuje 0 na standardni izlaz.
#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    int br = 0;
    while((c = getchar()) && c != EOF && c !='\n'){
        if(c == '[')
            br++;
        if(c == ']')
            br--;
        
        if(br<0){
            puts("0");
            return 0;
        }
    }
    if(br == 0){
        puts("1");
    }else{
        puts("0");
    }
}
