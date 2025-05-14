#include <stdio.h>
#include <stdlib.h>

float somasqr(float, float);
float sqr(float);
float soma(float, float);

int main(){
float a, b;

    printf("Digite dois numeros\n");
        scanf("%f%f", &a, &b);
    printf("A soma dos quadrados e: %.2f\n", somasqr(a, b));

system("PAUSE");

return 0;
}

float somasqr(float m, float n){
return soma(sqr(m), sqr(n));
}

float sqr(float z){
return z * z;
}

float soma(float m, float n){
return m + n;    
}