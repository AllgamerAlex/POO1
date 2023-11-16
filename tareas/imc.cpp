#include <iostream>
#include <cmath>
int main() {
	double w, h;
	std::cout << "Introduce tu peso: ";
	std::cin >> w;
	std::cout << "Introduce tu altura: ";
	std::cin >> h;
	double IMC = w/(pow(h,2));
	std::cout <<"Tu indice de masa corporal es: " <<IMC<< std::endl;
}