//Održava se takmičenje u gimnastici i potrebno je napisati program za praćenje rezultata. Na takmičenju učestvuje n,(n≥3) takmičara koje ocenjuje m,m≥2) sudija. 
//Pobednik je onaj takmičar koji ima najveću prosečnu ocenu. Program prvo učitava broj takmičara i sudija, a zatim m ocena za svakog od n takmičara. 
//Pretpostaviti da neće biti više od 100 takmičara i 100 sudija. Ocene čuvati u matrici pri čemu element (i,j) predstavlja ocenu koju je sudija j dao takmičaru i. 
//Ocena je jedan ceo broj iz intervala [0,10]. Na standardni izlaz ispisati redni broj pobednika (broj vrste u kojoj su poeni za tog takmičara). 
//Moguće je da više takmičara deli prvo mesto, ukoliko su im proseci jednaki i u tom slučaju treba ispisati njihove redne brojeve u zasebnim 
//linijama u redosledu u kom su učitani. Redni broj prvog unetog takmičara je 0. U slučaju neispravnih podataka ispisati -1.
#include <stdio.h>

int main(){
    int m,n,max_score = 0,score = 0,winner;
    scanf("%d %d",&n, &m);
    if(m < 2 || n < 3){
        puts("-1");
        return 1;
    }
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
            if(a[i][j] < 0){
                puts("-1");
                return 1;
            }
            score += a[i][j];
        }
        if(max_score < score){
            max_score = score;
            winner = i;
        }
        score = 0;
    }
    printf("%d ", winner);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            score += a[i][j];
        }
        if(score == max_score && i != winner){
            printf("%d ", i);
        }
        score = 0;
    }
}
