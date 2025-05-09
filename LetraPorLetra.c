#include <stdio.h>
#include <stdlib.h>
// Mesmo código do FOPEN.c

int main(){
FILE *fp = fopen("a.txt", "r");

int c;
while((c = fgetc(fp)) != EOF){
    putchar(c);
}

/* Pelo menos em C, e melhor ter o código de tratamento de erros
   dentro da MAIN() ou então com o #define */
if (fp == NULL){
    perror("Erro ao abrir o arquivo");
    return EXIT_FAILURE;
}

if(fclose(fp) != 0){
    perror("Erro ao fechar o arquivo");
    return EXIT_FAILURE;
}

return EXIT_SUCCESS;
}