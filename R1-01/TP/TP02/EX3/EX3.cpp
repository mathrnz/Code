#include <iostream>

void askUser(std::string thing, int& a) { //Demande à l'utilisateur, passage par référence (int)
	std::cout << thing << " ?> ";
	std::cin >> a;
}

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
	askUser("Jour de naissance", jn);
	askUser("Mois de naissance", mn);
	askUser("Année de naissance", an);
	askUser("Jour", j);
	askUser("Mois", m);
	askUser("Année", a);

	if (minMaj(jn, mn, an, j, m, a))
		std::cout << "Majeur" << std::endl;
	else
		std::cout << "Mineur" << std::endl;

	return 0;
}
