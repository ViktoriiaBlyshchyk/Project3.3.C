#include "Complex.h"
#include <iostream>

using namespace std;

int main()
{
	Complex x, y;
	cin >> x >> y;
	cout << add(x, y) << endl;
	cout << mul(x, y) << endl;

	if (equ(x, y))
		cout << "True\n";
	else
		cout << "False\n";

	cout << "count = " << Complex::Count() << endl;
	cout << "count = " << Object::Count() << endl;

	return 0;
}
