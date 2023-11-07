//
// Created by nicol on 07/11/2023.
//
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    for (a = 1; a <= 30; a++) {
        for (b = a + 1; b <= 30; b++) {
            c = sqrt(a * a + b * b);
            if (c == (int)c && a + b + c <= 30) {
                printf("%d - %d - %d\n", a, b, (int)c);
            }
        }
    }

    return 0;
}
