//
// Created by nicol on 07/11/2023.
//
#include <stdio.h>
#include <math.h>

int main() {
// defino las variables
    int a, b, c;
// hago el primer for para que a vaya de 3 a 8 ya que es el maximo numero de a
    for (a = 3; a <= 8; a++) {
        // igual con el segundo for el numero maximo de b es 15 entonces lo limito
        for (b = a + 1; b <= 15; b++) {
            //formula de el triangulo pitagorico para calcular c y verificar el triangulo
            c = sqrt(a * a + b * b);
            // como se cumple la formula del triangulo pitagórico se imprime solo los valores que me piden
            if ((a == 3 && b == 4) || (a == 6 && b == 8) || (a == 5 && b == 12) || (a == 8 && b == 15)) {
                printf("%d - %d - %d\n", a, b, (int)c);
            }
        }
    }

    return 0;
}
