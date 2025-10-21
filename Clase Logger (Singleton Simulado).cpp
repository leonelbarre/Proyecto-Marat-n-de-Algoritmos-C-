#include <iostream>
#include <string>
using namespace std;

class Logger {
private:
    static Logger* instancia;
    Logger() {}
public:
    static Logger* getInstance() {
        if(instancia == nullptr) {
            instancia = new Logger();
        }
        return instancia;
    }

    void log_mensaje(const string& mensaje) {
        cout << "LOG: " << mensaje << endl;
    }
};

// Inicialización de la instancia estática
Logger* Logger::instancia = nullptr;

int main() {
    Logger* log1 = Logger::getInstance();
    Logger* log2 = Logger::getInstance();

    log1->log_mensaje("Primer mensaje");
    log2->log_mensaje("Segundo mensaje");

    if(log1 == log2)
        cout << "Ambas variables apuntan a la misma instancia." << endl;

    return 0;
}

