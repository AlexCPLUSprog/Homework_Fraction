#include "Fraction.h"


Fraction::Fraction(int numerator, int denominator)
{
	{
		_denominator = denominator;
		_numerator = numerator;
	}
}

int Fraction::getNumerator()
{
	return _numerator;
}

void Fraction::setDenominator(int denominator)
{
	_denominator = denominator;
}

int Fraction::getDenominator()
{
	return _denominator;
}

void Fraction::setNumerator(int numerator)
{
	_numerator = numerator;
}

double Fraction::operator/(Fraction& other)
{
	double res((_numerator * other._denominator) / (_denominator * other._numerator));
	return res;

}

double Fraction::operator*(Fraction& other)
{
	double res((_numerator * other._numerator) / (_denominator * other._denominator));
	return res;
}

double Fraction::operator+(Fraction& other)
{
	if (_denominator != other._denominator) {
		double new_numerator = (_numerator * other._denominator) + (_denominator * other._numerator);
		double new_denominator = _denominator * other._denominator;
		double res = new_numerator / new_denominator;
		return res;
	}
	if (_denominator == other._denominator) {
		double new_numerator = _numerator + other._numerator;
		double new_denominator = _denominator;
		double res = new_numerator / new_denominator;	
		return res;
	}	
}

double Fraction::operator-(Fraction& other)
{
	if (_denominator != other._denominator) {
		double new_numerator = (_numerator * other._denominator) - (_denominator * other._numerator);
		double new_denominator = _denominator * other._denominator;
		double res = new_numerator / new_denominator;
		return res;
	}
	if (_denominator == other._denominator) {
		double new_numerator = _numerator - other._numerator;
		double new_denominator = _denominator;
		double res = new_numerator / new_denominator;
		return res;
	}
}
