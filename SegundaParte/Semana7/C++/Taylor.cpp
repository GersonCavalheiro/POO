#include "Taylor.h" 
#include <cmath>

Taylor::Taylor(int position) : Serie(position) {}

int Taylor::compute() {
    double result = 1.0;
    double x = position;

    for (int i = 1; i <= 10; i++) {
        result += (std::pow(x, i) / fatorial(i));
    }

    return static_cast<int>(result); // Os valores desta série são em ponto flutuante.
}

int Taylor::fatorial(int n) {
    Fatorial fatorial(n);
    return fatorial.compute();
}

