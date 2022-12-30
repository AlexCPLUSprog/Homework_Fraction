#pragma once

class Fraction
{
public:
	Fraction(int numerator, int denominator);

	int getNumerator();

	void setDenominator(int denominator);

	int getDenominator();

	void setNumerator(int numerator);

	double operator/(Fraction& other);

	double operator*(Fraction& other);

	double operator+(Fraction& other);

	double operator-(Fraction& other);

private:
	double _numerator;
	double _denominator;
};


