/*
Implatation pratique du TD02
Écrire directement le programme dans le style structuré.
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

bool minMaj(unsigned int jn, unsigned int mn, unsigned int an, unsigned int j, unsigned int m, unsigned int a) { //Vérifie si l'utilisateur est majeu ou mineur
	if (a - an < 18)
		return false;
	else if (a - an > 18)
		return true;
	else if ((a - an >= 18) && (m - mn >= 0) && (j - jn >= 0))
		return true;

	return false;
}

int main() {
	int jn, mn, an, j, m, a;
	ui::askUser(jn, "Jour de naissance");
	ui::askUser(mn, "Mois de naissance");
	ui::askUser(an, "Année de naissance");
	ui::askUser(j, "Jour");
	ui::askUser(m, "Mois");
	ui::askUser(a, "Année");

	std::cout << ((minMaj(jn, mn, an, j, m, a))?"majeur":"mineur") << std::endl;

	return EXIT_SUCCESS;
}
