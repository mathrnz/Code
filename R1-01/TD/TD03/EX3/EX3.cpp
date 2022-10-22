/*
Écrire un programme qui permet de dessiner : 
 Un rectangle de l sur h. 
Exemple pour l=4 et h=2 
****↲ 
****↲ 
*/
#include <iostream>

void drawRectangle(int l, int L) { //Dessine une rectangle de l sur L dans la sortie standard
	for (int j=1; j <= l; j++) {
		for (int i=1; i <= L; i++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}

int main() {
	drawRectangle(4, 5);

	return EXIT_SUCCESS;
}
