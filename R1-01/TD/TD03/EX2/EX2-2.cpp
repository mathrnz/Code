/*
Compléter le programme précédent pour que l’utilisateur ait la possibilité de recommencer 
sans avoir à le quitter et le relancer i.e. on demandera à l’utilisateur s’il veut recommencer. On 
utilisera « o » pour oui et « n » pour non. 
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

double perimeter(double r) { //Calcule le périmètre
	const double pi = 3.141592;
	return 2 * pi * r;	
}

char restart(char& r) { //demande à l'utilisateur si il veut recommencer 
	std::cout << "Relancer ? [o]ui / [n]on : ";
	std::cin >> r;
}

int main() {
	char rep = 'n';
	do {
        double r;
        ui::askUser(r, "Rayon ?");
        std::cout << "Le périmètre est de : " << perimeter(r) << std::endl;
        restart(rep);
	} while ( rep != 'n' );

	return 0;
}
