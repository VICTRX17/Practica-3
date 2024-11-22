#include <stdio.h>

int main() {
    int a, b, c, d;

    // Assignem valors fàcils de reconèixer
    b = 2;
    c = 3;
    d = 4;

    // Primera expressió: a = b + c * d;
    a = b + c * d;
    d = a;  // Obligació per evitar optimitzacions del compilador

    // Segona expressió: a = (b + c) * d;
    a = (b + c) * d;
    d = a;  // Obligació per evitar optimitzacions del compilador

    return 0;
}
