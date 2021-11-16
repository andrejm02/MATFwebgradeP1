\\Napisati program koji vrsi 'kruznu zamenu' tri broja a, b i c, tako sto u a upisuje b, u b upisuje c a u c upisuje a.
\\Ispisati nove vrednosti na izlaz. Program dobija brojeve a, b i c redom na svoj ulaz, a kao izlaz ispisuje nove brojeve a, b i c, takodje tim redom.
#include <stdio.h>

int main(){
    int a,b,c,d,e,f;
    scanf("%d %d %d", &a, &b, &c);
    d = b;
    e = a;
    f = c;
    a = d;
    b = f;
    c = e;
    printf("%d %d %d",a,b,c);
}
