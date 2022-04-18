#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Object.h"

using namespace std;

class Complex :
	public Object
{
	double x, y;

public:
	double GetX() const { return x; }
	double GetY() const { return y; }
	void SetX(double x) { this->x = x; }
	void SetY(double y) { this->y = y; }

	Complex();
	Complex(double, double);
	Complex(const Complex&);
	~Complex();

	operator string() const;

	friend ostream& operator <<(ostream&, const Complex&);
	friend istream& operator >>(istream&, Complex&);

	friend Complex add(Complex a, Complex b);
	friend Complex mul(Complex a, Complex b);
	friend bool equ(Complex a, Complex b);
};

