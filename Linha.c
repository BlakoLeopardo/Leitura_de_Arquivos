/* Aqui ele lê usando fgets, lê linha por linha*/

#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *fp = fopen("a.txt", "r");

char buff[256] = "\0";

while((fgets(buff, sizeof(buff), fp)) != NULL){
    printf("Linha: %s", buff);
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