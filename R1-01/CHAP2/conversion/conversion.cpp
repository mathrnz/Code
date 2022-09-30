#include <iostream>

double degToF(int tC) {
	return tC*(9/5)+32;
}

double degToK(int tC) {
	return tC+273.15;
}

double askT() {
	double tC;
	std::cout << "Rentrer une température en °C";
	std::cin >> tC;
	return tC;
}

void dispT(double tC) {
	std::cout << degToF(tC) << "°F " << degToK(tC) << "°K " << tC << "°C" << std::endl;
}

int main() {
	double UtC = askT();
	dispT(UtC);
	return 0;
}

