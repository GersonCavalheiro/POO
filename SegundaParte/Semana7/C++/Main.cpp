#include <iostream>
#include "Fibonacci.h"
#include "Fatorial.h"
#include "Harmonica.h"
#include "Taylor.h"

int main() {
    Fibonacci fibonacciSeries(10);
    Fatorial fatorialSeries(10);
    Harmonica harmonicaSeries(10);
    Taylor taylorSeries(10);

    std::cout << "Fibonacci: " << fibonacciSeries.get() << ", Computed Value: " << fibonacciSeries.compute() << std::endl;
    std::cout << "Fatorial: " << fatorialSeries.get() << ", Computed Value: " << fatorialSeries.compute() << std::endl;
    std::cout << "Série Harmônica: " << harmonicaSeries.compute() << std::endl;
    std::cout << "Série de Taylor para e^x: " << taylorSeries.get() << ", Computed Value: " << taylorSeries.compute() << std::endl;

    return 0;
}

