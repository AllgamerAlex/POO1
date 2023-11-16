#include <iostream>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <cmath>
int main(){
	double p, r, n;
    std::cout << "Ingrese el P Euros invertidos: ";
    std::cin >> p;
    std::cout << "Ingrese la tasa de interes anual de R: ";
    std::cin >> r;
    std::cout << "Ingrese los N anos: ";
    std::cin >> n;
    double interes = (r/100);
    double exponente = n+1;
    double potencia = pow(interes, exponente);
    double d = (p*(1-(potencia)))/(1-interes);
    std::cout<<d<< std::endl;
}
