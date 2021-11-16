//Vozite automobil i ispred Vas brzinu vidite u km/h. 
//Napisati program koji za unetu celobrojnu vrednost brzine izrazene u km/h ispisuje brzinu u m/s, zaokruzeno na dve decimale.
#include <stdio.h>

int main(){
    int v;
    scanf("%d", &v);
    double v2 = v/3.6;
    printf("%.2lf\n", v2);
}
