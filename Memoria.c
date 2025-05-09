/* Lê blocos de memória (útil para binários): */
#include <stdio.h>
#include <stdlib.h>

int main(){
unsigned char buffer[1024] = {0}; 

FILE *fp = fopen("a.txt", "wb"); // Para binarios é rb

/* Pelo menos em C, e melhor ter o código de tratamento de erros
   dentro da MAIN() ou então com o #define
   O tratamento de erros ao se abrir arquivos deve ser feito antes
   do código de imprimir ou exibir.*/
if (fp == NULL){
    perror("Erro ao abrir o arquivo");
    return EXIT_FAILURE;
}

/* Aqui nós tratamos os erros que podem ocorrer
   DURANTE a leitura.*/
size_t lidos = fread(buffer, 1, sizeof(buffer), fp);
if(ferror(fp)){
    perror("Erro durante a leitura");
    fclose(fp);
    return EXIT_FAILURE;
}

// Aqui ocorre a leitura
printf("Lidos %zu bytes\n", lidos);

if(fclose(fp) != 0){
    perror("Erro ao fechar o arquivo");
    return EXIT_FAILURE;
}

return EXIT_SUCCESS;
}
