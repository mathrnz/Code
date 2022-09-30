#include <iostream>

using namespace std;

int main() {
	const double plafond1 = 500;
	const double plafond2 = 1200;
	const double plafond3 = 1500;
	const double taux1 = 0.15;
	const double taux2 = 0.25;
	const double taux3 = 0.30;

	cout << "Revenu imposable de l'année précédente ? >";
	double revenu_imposable;
	cin >> revenu_imposable;
	double impot;

	if(revenu_imposable < plafond1) {
		impot = 0;
	} else if(revenu_imposable >= plafond2 && revenu_imposable < plafond3)
		impot = impot + (revenu_imposable - plafond2) * taux2;
	} else if (revenu_imposable >= plafond3) {
		impot = impot + (revenu_imposable - plafon2) * taux3;
		if (impot > 500) {
			impot = 500;


	cout << "L'impot dû est de : " << impot << endl;
	return 0;
}
