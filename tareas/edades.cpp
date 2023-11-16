#include <iostream>
#include <iomanip>
#include <cmath>
int main(){
	double edad;
	std::cout << "Introduce tu edad: ";
	std::cin >> edad;
	int mercurio = (edad*365)/88;
	std::cout <<"Tu edad en Mercurio es: " <<mercurio<< std::endl;
	int venus = (edad*365)/225;
	std::cout <<"Tu edad en Venus es: " <<venus<< std::endl;
	int jupiter = (edad*365)/4380;
	std::cout <<"Tu edad en Jupiter es: " <<jupiter<< std::endl;
	int saturno = (edad*365)/10767;
	std::cout <<"Tu edad en Saturno es: " <<saturno<< std::endl;
}