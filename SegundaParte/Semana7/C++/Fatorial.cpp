#include "Fatorial.h"

Fatorial::Fatorial(int position) : Serie(position) {}

int Fatorial::compute() {
    int result = 1;
    for (int i = 1; i <= position; i++) {
        result *= i;
    }
    return result;
}

