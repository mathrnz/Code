#include <iostream>
#include "ex3.hpp"

void ex3::askUser(std::string thing, int& a) {
	std::cout << thing << " ?> ";
	std::cin >> a;
}

bool ex3::minMaj(unsigned int jn, unsigned int mn, unsigned int an, unsigned int j, unsigned int m, unsigned int a) {
	if (a - an < 18)
		return false;
	else if (a - an > 18)
		return true;
	else if ((a - an >= 18) && (m - mn >= 0) && (j - jn >= 0))
		return true;

	return false;
}

int ex3::prog() {
	int jn, mn, an, j, m, a;
	ex3::askUser("Jour de naissance", jn);
	ex3::askUser("Mois de naissance", mn);
	ex3::askUser("Année de naissance", an);
	ex3::askUser("Jour", j);
	ex3::askUser("Mois", m);
	ex3::askUser("Année", a);

	if (minMaj(jn, mn, an, j, m, a))
		std::cout << "Majeur" << std::endl;
	else
		std::cout << "Mineur" << std::endl;

	return 0;
}
