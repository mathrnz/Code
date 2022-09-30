#include <iostream>

int main() {
	int i = 10;
	int & i2 = i;

	i2 = i2 + 1;

	std::cout << i2 << std::endl;
	std::cout << i << std::endl;
}
