#include <iostream>

double degToF(int tC) {	//Celcius vers Fahrenheit 
	return tC*(9/5)+32;
}

double degToK(int tC) {	//Celcius vers Kelvin
	return tC+273.15;
}

double askT() { //Demande la température
	double tC;
	std::cout << "Rentrer une température en °C";
	std::cin >> tC;
	return tC;
}

void dispT(double tC) { //Affiche la température
	std::cout << degToF(tC) << "°F " << degToK(tC) << "°K " << tC << "°C" << std::endl;
}

int main() {
	double UtC = askT();
	dispT(UtC);
	return 0;
}

