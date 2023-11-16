#include <iostream>
#include <iomanip> // Necesario para std::setprecision

int main() {
    double numero = 3.14159265359;
    
    // Configura la precisi�n decimal
    int precision = 2; // N�mero de decimales que deseas mostrar
    std::cout << std::fixed << std::setprecision(precision) << numero << std::endl;
    
    return 0;
}
