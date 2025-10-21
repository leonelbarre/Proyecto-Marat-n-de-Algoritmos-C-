#include <iostream>
#include <stack>
using namespace std;

class ColaDosPilas {
private:
    stack<int> pila_in, pila_out;

    void mover() {
        while (!pila_in.empty()) {
            pila_out.push(pila_in.top());
            pila_in.pop();
        }
    }

public:
    void enqueue(int x) {
        pila_in.push(x);
    }

    int dequeue() {
        if (pila_out.empty()) {
            if (pila_in.empty()) {
                cout << "Cola vacía\n";
                return -1;
            }
            mover();
        }
        int valor = pila_out.top();
        pila_out.pop();
        return valor;
    }

    bool is_empty() {
        return pila_in.empty() && pila_out.empty();
    }
};

int main() {
    ColaDosPilas cola;
    cola.enqueue(10);
    cola.enqueue(20);
    cola.enqueue(30);
    cout << "Elemento extraído: " << cola.dequeue() << endl; // 10
    cout << "Elemento extraído: " << cola.dequeue() << endl; // 20
    cola.enqueue(40);
    cout << "Elemento extraído: " << cola.dequeue() << endl; // 30
    return 0;
}
