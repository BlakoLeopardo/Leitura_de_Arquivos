#include <stdio.h>
#include <stdlib.h>

int main(){
int dados[] = {1, 2, 3, 4, 5};
FILE *fp = fopen("a.txt", "wb");

// Usando fwrite - Grava blocos de memória (binário):
size_t escritos = fwrite(dados, sizeof(int), 5, fp);

if(ferror(fp)){
    perror("Erro durante a escrita");
    fclose(fp);
    return EXIT_FAILURE;
} // Ver se tem erro durante a leitura.

printf("Escritos %zu inteiros\n", escritos);

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