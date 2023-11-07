//
// Created by nicol on 07/11/2023.
//
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    for (a = 3; a <= 8; a++) {
        for (b = a + 1; b <= 30; b++) {
            c = sqrt(a * a + b * b);
            if ((a == 3 && b == 4) || (a == 6 && b == 8) || (a == 5 && b == 12) || (a == 8 && b == 15)) {
                printf("%d - %d - %d\n", a, b, (int)c);
            }
        }
    }

    return 0;
}
