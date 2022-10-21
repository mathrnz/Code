#include <iostream>

void askUser(double& r, std::string msg) { //Demande à l'utilisateur, passage par référence (int)
	std::cout << msg << "> ";
       	std::cin >> r;
}

double perimeter(double r) { //Calcule le périmètre
	const double pi = 3.141592;
	return 2 * pi * r;	
}

void restart(char& r) { //demande à l'utilisateur si il veut recommencer 
	std::cout << "Relancer ? [o]ui / [n]on : ";
	std::cin >> r;
	
	while ( !(( r == 'n') || (r == 'o'))) {
		std::cout << "Erreur : " <<  r << " Non reconnu" << std::endl;
		restart(r);
	}
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
