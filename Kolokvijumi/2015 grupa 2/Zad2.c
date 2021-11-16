//Korisnik unosi 7 karaktera koji predstavljaju indeks studenta koji je oblika OOGGBBB. OO je oznaka smera i moze biti mi, ma, mr, ms, mm, mp. 
//GG je oznaka godine upisa. BBB je oznaka broja koji moze biti jednocifren,dvocifren ili trocifren sa vodećim nulama. 
//Na osnovu ovih podataka na standarni izlaz ispisati ime smera kome student pripada i indeks u obliku broj/godina. 
//U slučaju greške ( ukoliko OO kao oznaka smera nije ispravna ili ostali karakteri nisu brojevi ) ispisati -1.
//Nazivi smerova su: mi - informatika, ma - astronomija, mr - racunarstvo i informatika, ms - statistika, mm - teorijska matematika, mp - primenjena matematika.
#include <stdio.h>
#include <stdlib.h>

int main(){
    char a,b,c,d,e,f,g;
    scanf("%c%c%c%c%c%c%c", &a,&b,&c,&d,&e,&f,&g);
    if(e < '0' || e > '9' || f < '0' || f > '9' || g < '0' || g > '9' || c < '0' || c > '9' || d < '0' || d > '9'){
        puts("-1");
        return 1;        
    }    
    if(a == 'm' && b == 'i')
        printf("informatika ");
    else if(a == 'm' && b == 'a')
        printf("astronomija ");
    else if(a == 'm' && b == 'r')
        printf("racunarstvo i informatika ");
    else if(a == 'm' && b == 's')
        printf("statistika ");
    else if(a == 'm' && b == 'm')
        printf("teorijska matematika ");
    else if(a == 'm' && b == 'p')
        printf("primenjena matematika ");
    else{
        puts("-1");
        return 1;
    }
    if(e == '0'){
        if(f == '0'){
            printf("%c/", g);
        }
        else{
            printf("%c%c/",f,g);
        }
    }
    else{
        printf("%c%c%c/", e,f,g);       
    }
    if(c >= '2' && d > '1'){
        printf("19%c%c",c,d);
    }else{
        printf("20%c%c",c,d);
    }
}
