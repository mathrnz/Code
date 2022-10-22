/*
Implémentez la question 2 et 3 de l'exercice 1.
Vous prendrez soin de structurer correctement votre programme (sous-programme et programme principal).
*/

#include <iostream>

void readDouble(double& nb, double i1, double i2) { //Demande à l'utlisateur un double qui ne sera accepté que s'il est compris entre i1 et i2
	do {
		std::cout << "Saisir un nombre entre " << i1 << " et " << i2 << "> ";
		std::cin >> nb;
	} while ((nb < i1) || (nb > i2));
}

int main() {
	const double min = 0;
	const double max = 20;
	double nb;
	readDouble(nb, min, max);
}

