#include <iostream>
#include "Fraction.h"
int main() {

	Fraction F1(3, 4);
	Fraction F2(5, 6);

	std::cout << "First numerator: " << F1.getNumerator() << "\nFirst denominator: " << F1.getDenominator() << '\n';
	std::cout << "Second numerator: " << F2.getNumerator() << "\nSecond denominator: " << F2.getDenominator() << "\n\n";

	std::cout << F1.getNumerator() << "/" << F1.getDenominator() << " * " << F2.getNumerator() << "/" << F2.getDenominator() << " = " << F1.operator*(F2) << std::endl;
	std::cout << F1.getNumerator() << "/" << F1.getDenominator() << " / " << F2.getNumerator() << "/" << F2.getDenominator() << " = " << F1.operator/(F2) << std::endl;
	std::cout << F1.getNumerator() << "/" << F1.getDenominator() << " + " << F2.getNumerator() << "/" << F2.getDenominator() << " = " << F1.operator+(F2) << std::endl;
	std::cout << F1.getNumerator() << "/" << F1.getDenominator() << " - " << F2.getNumerator() << "/" << F2.getDenominator() << " = " << F1.operator-(F2) << std::endl;

}