#include <stdio.h>

int main() {
    int a[4] = {1, 2, 3, 4};  // Array de 4 enters
    int b[4] = {5, 6, 7, 8};  // Array de 4 enters
    int c[4];                 // Array de 4 enters per emmagatzemar el resultat

    for (int i = 0; i < 4; i++) {
        c[i] = a[i] * b[i];   // Multiplica les posicions corresponents dels arrays
    }

    // Opcional: imprimir el resultat
    for (int i = 0; i < 4; i++) {
        printf("c[%d] = %d\n", i, c[i]);
    }

    return 0;
}
