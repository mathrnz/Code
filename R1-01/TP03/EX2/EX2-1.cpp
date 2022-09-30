#include <iostream>

void askUser(double& r, std::string msg) {
	std::cout << msg << "> ";
       	std::cin >> r;
}

double perimeter(double r) {
	const double pi = 3.141592;
	return 2 * pi * r;	
}

int main() {
	double r;
	askUser(r, "Rayon ?");
	std::cout << "Le périmètre est de : " << perimeter(r) << std::endl;
}
