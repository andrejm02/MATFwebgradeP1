//Napisati program koji na izlaz ispisuje duzinu najduzeg argumenta komandne linije. Ako je program pozvan bez argumenta, ispisati -1.
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int max = 0;
    if(argc == 1){
        puts("-1");
        return 1;
    }
    for(int i = 1; i < argc; i++){
        if(max < strlen(argv[i]))
            max = strlen(argv[i]);
    }
    printf("%d\n", max);
}
