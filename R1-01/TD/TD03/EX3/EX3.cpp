//Rectangle en charactère *
#include <iostream>

void rectangle(int l, int L) { //Dessine une rectangle de l sur L dans la sortie standard

	for (int j=1; j <= l; j++) {
		for (int i=1; i <= L; i++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}

int main() {
	rectangle(4, 5);
}
