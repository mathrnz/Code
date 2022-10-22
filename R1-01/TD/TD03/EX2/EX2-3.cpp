/*
Améliorer le programme précédent afin de ne pas permettre d’autre choix que « o » ou « n ». 
En cas d’erreur, il faudra également prévenir l’utilisateur de sa maladresse avant de lui 
demander de ressaisir un choix valide. 
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;


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
		ui::askUser(r, "Rayon ?");
		std::cout << "Le périmètre est de : " << perimeter(r) << std::endl;
		restart(rep);
	} while ( rep != 'n' );

	return EXIT_SUCCESS;
}
