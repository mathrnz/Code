#include <iostream>

void triangleRectangle(int L) {

	for (int j=1; j <= L; j++) { //longueur
		std::cout << "*";

		for (int i=1; i < j; i++) { //Largeur, augemente à chaque tour de la première boucle
			std::cout << "*";
		}

		std::cout << std::endl;
	}
}

int main() {
	triangleRectangle(4);
}
