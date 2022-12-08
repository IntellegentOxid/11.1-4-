#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

const unsigned int VARIANT = 6;

float func11(int x);
float func12(int x);

int main()
{
	cout << "i = " << VARIANT << endl;

	float a = 0;
	for (int k = VARIANT; k <= VARIANT + 5; k++)
		a += func11(k);
	cout << "\na = " << round(a * 100) / 100 << endl;

	float b = 0;
	for (int k = VARIANT; k <= VARIANT + 8; k++)
		b += func12(k);
	cout << "b = " << round(b * 100) / 100 << endl;

	float Z = sin(a) - b;
	cout << "\nZ = " << round(Z * 100) / 100 << endl;
}

float func11(int x)
{
	float f11 = 8 * (log10(abs(sin(x) + 5)));
	return f11;
}

float func12(int x)
{
	float f12 = (1.0 / (pow(sin(x), 3) + 5.4)) - log10(abs(x));
	return f12;
}