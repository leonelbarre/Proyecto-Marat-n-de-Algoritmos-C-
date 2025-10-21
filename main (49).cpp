#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX];
int top = -1;

bool is_empty() {
    return top == -1;
}

void push(int elemento) {
    if (top == MAX - 1) {
        cout << "Error: Stack Overflow" << endl;
        return;
    }
    stack[++top] = elemento;
    cout << "Elemento " << elemento << " agregado a la pila." << endl;
}

int pop() {
    if (is_empty()) {
        cout << "Error: Stack Underflow" << endl;
        return -1; // Indicador de error
    }
    return stack[top--];
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60); // Provoca overflow

    cout << "Elemento retirado: " << pop() << endl;
    cout << "Elemento retirado: " << pop() << endl;
    while (!is_empty()) {
        cout << "Elemento retirado: " << pop() << endl;
    }
    pop(); // Provoca underflow

    return 0;
}