#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    clock_t start, end;
    double elapsed;

    // Medição sem register
    start = clock();
    for (int j = 0; j < 50000; j++) {
        for (int i = 0; i < 50000; i++) {
            // Corpo vazio: cuidado com otimização
        }
    }
    end = clock();
    elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Tempo dos lacos (sem register): %.6f segundos\n", elapsed);

    // Medição com register (sugestão apenas)
    register int m, n;
    start = clock();
    for (m = 0; m < 50000; m++) {
        for (n = 0; n < 50000; n++) {
            // Mesmo cuidado: corpo vazio
        }
    }
    end = clock();
    elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Tempo dos lacos (com register):  %.6f segundos\n", elapsed);

    system("PAUSE");
    return 0;
}