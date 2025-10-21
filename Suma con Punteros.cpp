#include <iostream>

int sumarConPunteros(int* a, int* b) {
    return *a + *b; // Desreferenciar punteros y sumar
}

int main() {
    int num1, num2;
    
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;
    
    int resultado = sumarConPunteros(&num1, &num2);
    
    std::cout << "La suma de los números es: " << resultado << std::endl;
    
    return 0;
}
