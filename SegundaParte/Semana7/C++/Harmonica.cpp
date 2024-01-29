#include "Harmonica.h"

Harmonica::Harmonica(int position) : Serie(position) {}

int Harmonica::compute() {
    double result = 0.0;

    for (int i = 1; i <= position; i++) {
        result += 1.0 / i;
    }

    return (int)result; // Convertendo o resultado para inteiro
}

