#include <iostream>
using namespace std;

#define MAX 100
char stack[MAX];
int top = -1;

bool is_empty() {
    return top == -1;
}

void push(char c) {
    if (top == MAX - 1) return;
    stack[++top] = c;
}

char pop() {
    if (is_empty()) return '\0';
    return stack[top--];
}

bool verificar_balance(const string &cadena) {
    for (char c : cadena) {
        if (c == '(') push(c);
        else if (c == ')') {
            if (is_empty()) return false;
            pop();
        }
    }
    return is_empty();
}

int main() {
    string texto;
    cout << "Ingresa una cadena con paréntesis: ";
    getline(cin, texto);

    if (verificar_balance(texto)) {
        cout << "Los paréntesis están balanceados." << endl;
    } else {
        cout << "Los paréntesis NO están balanceados." << endl;
    }
    return 0;
}