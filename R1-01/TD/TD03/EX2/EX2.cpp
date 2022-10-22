/*
Écrire un programme qui demande à l’utilisateur de saisir la valeur du rayon d’un cercle, calcule 
et affiche son périmètre. 
Rappel : le périmètre 𝑝 d’un cercle de rayon 𝑟 est définit par 𝑝=2×𝑟×𝜋.
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

double perimeter(double r) { //Calcule le périmètre
	const double pi = 3.141592;
	return 2 * pi * r;	
}

int main() {
	double r;
	ui::askUser(r, "Rayon ?");
	std::cout << "Le périmètre est de : " << perimeter(r) << std::endl;

    return EXIT_SUCCESS;
}
