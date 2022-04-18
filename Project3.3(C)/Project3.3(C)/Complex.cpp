#include "Complex.h"

Complex::Complex()
{
	x = 0;
	y = 0;
}

Complex::Complex(double a = 0, double b = 0)
{
	x = a;
	y = b;
}

Complex::Complex(const Complex& c)
{
	x = c.x;
	y = c.y;
}

Complex::~Complex()
{ }

Complex::operator string () const
{
	stringstream ss;
	if (y >= 0)
		ss << x << "+" << y << "i\n";
	else
		ss << x << y << "i\n";
	return ss.str();
}

ostream& operator << (ostream& out, const Complex& c)
{
	out << string(c);
	return out;
}

istream& operator >> (istream& in, Complex& c)
{
	cout << "Real: "; in >> c.x;
	cout << "Image: "; in >> c.y;
	cout << endl;
	return in;
}

Complex add(Complex a, Complex b)
{
	return Complex(a.x + b.x, a.y + b.y);
}

Complex mul(Complex a, Complex b)
{
	return Complex(a.x * b.x - a.y * b.y,
		a.x * b.y + a.y * b.x);
}

bool equ(Complex a, Complex b)
{
	return a.x == b.x && a.y == b.y;
}
