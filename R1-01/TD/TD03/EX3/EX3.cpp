//Rectangle en charactère *
#include <iostream>

void rectangle(int l, int L) {

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
