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

