/*
Un triangle rectangle de taille n sur n. 
Exemple un triangle pour n=4 
*↲ 
**↲ 
***↲ 
****↲ 
*/
#include <iostream>

void drawTriangleRectangle(int L) { //Dessine un triangle rectangle de longeur L dans la sortie standard
	for (int j=1; j <= L; j++) { //longueur
		std::cout << "*";

		for (int i=1; i < j; i++) { //Largeur, augemente à chaque tour de la première boucle
			std::cout << "*";
		}
		
		std::cout << std::endl;
	}
}

int main() {
	drawTriangleRectangle(4);

	return EXIT_SUCCESS;
}
