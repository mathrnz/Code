#include <iostream>

using namespace std;

int main() {
	const double plafond1 = 500, plafond2 = 1200, plafond3 = 1600,
				 taux1 = 0.15, taux2 = 0.25, taux3 = 0.30;

	cout << "Revenu imposable de l'année précédente ? > ";
	double revenu_imposable;
	cin >> revenu_imposable;
	double impot;

	if(revenu_imposable < plafond1)
		impot = 0;
	else {
		impot = revenu_imposable * taux1;
		if(revenu_imposable >= plafond2)
			impot = impot + (revenu_imposable - plafond2) * taux2;
	}	if (revenu_imposable >= plafond3 && ((revenu_imposable - plafond3) * taux3 <= 500) )
			impot = impot + (revenu_imposable - plafond3) * taux3;
		else {
			impot = impot + 500;
		}

	cout << "L'impot dû est de : " << impot << endl;
	
	return EXIT_SUCCESS;
}
