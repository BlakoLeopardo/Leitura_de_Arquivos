#include <stdio.h>
#include <stdlib.h>

long fat(int);

int main(){
int n;
do
{
    printf("Digite um numero ou um numero negativo para termianr: ");
    scanf("%d", &n);
    if(n < 0){
        break;
    }
    printf("O fatorial de %d e %ld.\n", n, fat(n));
} while (1);

system("PAUSE");
return 0;
}

long fat(int n){
    return((n==0) ? (long)1 : (long)n * fat(n - 1));
}