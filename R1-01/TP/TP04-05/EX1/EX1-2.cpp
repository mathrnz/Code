/*
Implémentez la question 2 et 3 de l'exercice 1.
Vous prendrez soin de structurer correctement votre programme (sous-programme et programme principal).
*/

#include <iostream>

void readDouble(double& nb, double i1, double i2, std::string msg) { //Demande à l'utlisateur un double qui ne sera accepté que s'il est compris entre i1 et i2
	do {
		std::cout << msg << " entre "  << i1 << " et " << i2 << "> ";
		std::cin >> nb;
	} while ((nb < i1) || (nb > i2));
}

double moyPon(double n1, double n2, double n3, double c1, double c2, double c3) { //Effectue la moyenne pondérée
	double ctotal = c1 + c2 + c3;

	n1 = n1 * c1;
	n2 = n2 * c2;
	n3 = n3 * c3;

	return (n1 + n2 + n3)/ctotal;
}

int main() {
	const double min = 0;
	
	const double nmax = 20;
	double note1, note2, note3;
	readDouble(note1, min, nmax, "Saisir une note");
	readDouble(note2, min, nmax, "Saisir une note");
	readDouble(note3, min, nmax, "Saisir une note");

	const double cmax = 30;
	double coeff1, coeff2, coeff3;
	readDouble(coeff1, min, cmax, "Saisir un coeff");
	readDouble(coeff2, min, cmax, "Saisir un coeff");
	readDouble(coeff3, min, cmax, "Saisir un coeff");

	std::cout << "La moyenne est de : " << moyPon(note1, note2, note3, coeff1, coeff2, coeff3) << std::endl;
}

