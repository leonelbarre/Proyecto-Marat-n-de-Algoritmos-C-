#include <iostream>

int* mayor(int* x, int* y) {
    if (*x > *y) return x;
    else return y;
}

int main() {
    int a, b;
    std::cout << "Ingrese el primer número: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> b;

    int* ptrMayor = mayor(&a, &b);

    std::cout << "El número mayor es: " << *ptrMayor << std::endl;

    return 0;
}

