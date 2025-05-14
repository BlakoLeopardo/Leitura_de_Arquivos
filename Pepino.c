#include <stdio.h>

/* não recebe argumentos, não retorna nada */
void saudacao_inicial(void) {
    printf("=== Início do Programa ===\n");
}

/* recebe valor e não retorna, faz efeito colateral */
void dobrar_valor(int *x) {
    *x = (*x) * 2;
}

int main(void) {
    saudacao_inicial();

    int n = 5;
    printf("Antes: %d\n", n);
    dobrar_valor(&n);
    printf("Depois: %d\n", n);

    return 0;  /* aqui retorna valor inteiro, pois main não é void */
}