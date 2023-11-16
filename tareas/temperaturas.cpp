#include <iostream>
#include <iomanip>
#include <cmath>
int main(){
	double c;
	std::cout << "Introduce los grados Celcius: ";
	std::cin >> c;
	double f = (c*(9/5))+32;
    std::cout <<"Los grados en Farenheit: "<< std::setprecision(2)<< f << std::endl;
}
