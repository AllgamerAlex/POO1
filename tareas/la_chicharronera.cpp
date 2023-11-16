#include <iostream>
#include <cmath>
#include <iomanip>
#include <cmath>
int main(){
	double a, b, c;
    std::cout << "Ingrese el coeficiente a: ";
    std::cin >> a;
    std::cout << "Ingrese el coeficiente b: ";
    std::cin >> b;
    std::cout << "Ingrese el coeficiente c: ";
    std::cin >> c;
    double discriminante = b * b - 4 * a * c;
    double x1 = (-b + std::sqrt(discriminante)) / (2 * a);
    std::cout<<x1<< std::endl;
}
