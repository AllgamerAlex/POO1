#include <iostream>
using namespace std; 

class Automovil {
private:
    int velocidad;
    int kilometraje;
    string modelo;
    string color;
    string marca;

public:
    void setVelocidad(int v) {
        velocidad = v;
    }
    int getVelocidad() {
        return velocidad;
    }
    void encender() {
        cout << "El motor se ha encendido \n";
    }
    void apagar(){
        cout <<"El motor se ha apagado \n";
    }
    void frenar(){
        cout <<"El coche ha frenado \n";
    }
    void setMarca(string ma){
        marca = ma;
    }
    void setModelo(string mo){
        modelo = mo;
    }
    void setColor(string c){
        color = c;
    }
    int setKilometraje(int k){
        kilometraje = k;
    }
    string getMarca(){
        return marca;
    }
    string getModelo(){
        return modelo;
    }
    string getColor(){
        return color;
    }
    int getKilometraje(){
        return kilometraje ;
    }
};

int main() {
    Automovil miAuto; 
    int velocidad;
    int kilometraje;
    string modelo;
    string color;
    string marca;

    cout << "Atributos del auto \n";
    cout <<"Marca : ";
    cin >> marca;
    cout <<"modelo: ";
    cin >> modelo;
    cout<<"Kilometraje: ";
    cin >> kilometraje;
    cout<<"Color: ";
    cin >> color;
    cout<<"velocidad: ";
    cin >> velocidad;

    miAuto.encender(); 
    miAuto.setVelocidad(velocidad);
    miAuto.setMarca(marca);
    miAuto.setColor(color);
    miAuto.setModelo(modelo);
    miAuto.setKilometraje(kilometraje);
    

    cout <<"El coche es \n";
    cout <<"Marca: " <<miAuto.getMarca() << endl;
    cout <<"Modelo: " <<miAuto.getModelo() << endl;
    cout <<"Color: " <<miAuto.getColor() << endl;
    cout <<"kilometraje: " <<miAuto.getKilometraje() << "Km" << endl;
    cout << "Velocidad: " << miAuto.getVelocidad() << " km/h" <<endl;

    miAuto.frenar();
    miAuto.apagar();

    return 0;
}