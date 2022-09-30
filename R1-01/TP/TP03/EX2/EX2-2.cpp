#include <iostream>

void askUser(double& r, std::string msg) {
	std::cout << msg << "> ";
       	std::cin >> r;
}

double perimeter(double r) {
	const double pi = 3.141592;
	return 2 * pi * r;	
}

void restart(char& r) {
	std::cout << "Relancer ? [o]ui / [n]on : ";
	std::cin >> r;
}

int main() {
	char rep = 'n';
	do {
	double r;
	askUser(r, "Rayon ?");
	std::cout << "Le périmètre est de : " << perimeter(r) << std::endl;
	restart(rep);
	} while ( rep != 'n' );

	return 0;
}
