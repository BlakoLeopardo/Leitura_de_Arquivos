#include <stdio.h>
#include <stdlib.h>

void retangulo(int, int);

int main(){
    printf("Sala\n");
retangulo(22, 12);
    printf("Cozinha\n");
retangulo(16, 16);
    printf("Banheiro\n");
retangulo(6, 8);
    printf("Quarto\n");
retangulo(12, 12);
    printf("\n");

return 0;
}

void retangulo(int larg, int alt){
    larg /= 2;
    alt /= 4;
for (int j = 1; j <= alt; j++){
    printf("\t\t");
    for (int k = 1; k <= larg; k++){
        printf("\xBD");
    }
    printf("\n");
}

}