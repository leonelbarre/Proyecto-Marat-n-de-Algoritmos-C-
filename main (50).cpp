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
        return -1;
    }
    return stack[top--];
}

int peek() {
    if (is_empty()) {
        cout << "Error: Stack Vacía" << endl;
        return -1;
    }
    return stack[top];
}

int main() {
    push(5);
    push(15);
    push(25);

    cout << "Elemento superior (peek): " << peek() << endl;
    cout << "Elemento retirado: " << pop() << endl;
    cout << "Elemento superior (peek): " << peek() << endl;

    return 0;
}