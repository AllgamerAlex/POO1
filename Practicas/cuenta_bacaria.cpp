#include <iostream>
#include <string>
using namespace std;

class CuentaBancaria {
private:
    string nombre;  // Atributo de la clase
    double saldo;   // Atributo de la clase

public:
    // Método para establecer el nombre de la cuenta
    void setNombre(string n) {
        nombre = n;
    }

    // Método para obtener el nombre de la cuenta
    string getNombre() {
        return nombre;
    }

    // Método para establecer el saldo de la cuenta
    void setSaldo(double s) {
        saldo = s;
    }

    // Método para obtener el saldo de la cuenta
    double getSaldo() {
        return saldo;
    }

    // Método para depositar dinero en la cuenta
    void deposita(double cantidad) {
        saldo += cantidad;
        cout << "Depósito exitoso. Nuevo saldo: " << saldo << " USD" << endl;
    }

    // Método para retirar dinero de la cuenta
    void retira(double cantidad) {
        if (cantidad <= saldo) {
            saldo -= cantidad;
            cout << "Retiro exitoso. Nuevo saldo: " << saldo << " USD" << endl;
        } else {
            cout << "Fondos insuficientes para realizar el retiro." << endl;
        }
    }

    // Método para mostrar los detalles de la cuenta
    void muestra() {
        cout << "Nombre de la cuenta: " << nombre << endl;
        cout << "Saldo actual: " << saldo << " USD" << endl;
    }
};

int main() {
    CuentaBancaria miCuenta;  // Crear un objeto de la clase CuentaBancaria
    string nombre = "";
    double saldo = 0.0;
    double cantidad = 0.0;

    cout << "Ingresa el nombre de la cuenta: ";
    cin >> nombre;
    miCuenta.setNombre(nombre);

    cout << "Ingresa el saldo inicial de la cuenta: ";
    cin >> saldo;
    miCuenta.setSaldo(saldo);

    miCuenta.muestra();  // Mostrar detalles iniciales de la cuenta

    // Realizar operaciones de depósito y retiro
    cout << "Ingresa la cantidad a depositar: ";
    cin >> cantidad;
    miCuenta.deposita(cantidad);

    cout << "Ingresa la cantidad a retirar: ";
    cin >> cantidad;
    miCuenta.retira(cantidad);

    // Mostrar detalles finales de la cuenta
    miCuenta.muestra();

    return 0;
}