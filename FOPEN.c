#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *fp = fopen("a.txt", "r");


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

/*  Verifique sempre retorno de fopen, fgets, fread, fwrite e fclose.

    Para manipulação de arquivos binários, prefira modos com b e use fread/fwrite.

    Para posicionar o ponteiro no arquivo, use fseek(fp, desloc, SEEK_SET|CUR|END) e ftell.*/