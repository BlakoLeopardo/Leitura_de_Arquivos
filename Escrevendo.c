#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *fp = fopen("a.txt", "w");

fputc('A', fp); // escreve um caractere
fputs("Olá, bosta!\n", fp);

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