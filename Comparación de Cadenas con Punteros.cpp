#include <iostream>
#include <cstring>

bool strcmp_ptr(char* str1, char* str2) {
    while(*str1 != '\0' && *str2 != '\0') {
        if(*str1 != *str2) return false;
        str1++;
        str2++;
    }
    return *str1 == *str2;
}

int main() {
    char str1[100], str2[100];

    std::cout << "Ingresa la primera cadena: ";
    std::cin.getline(str1, 100);
    std::cout << "Ingresa la segunda cadena: ";
    std::cin.getline(str2, 100);

    if(strcmp_ptr(str1, str2))
        std::cout << "Las cadenas son iguales." << std::endl;
    else
        std::cout << "Las cadenas son diferentes." << std::endl;

    return 0;
}