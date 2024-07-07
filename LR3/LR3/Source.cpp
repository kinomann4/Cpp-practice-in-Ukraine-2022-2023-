# include <iomanip>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Task 1
	float r, h, sb, sp, v, pi = 3.14159;
	cout << "Enter the radius of the cylinder base: ";
	cin >> r;
	cout << "Enter the height of the cylinder: ";
	cin >> h;
	sb = 2 * pi * r * h;
	sp = sb + 2 * pi * r * r;
	v = pi * r * r * h;
	cout << "Input values and calculation results:" << endl;
	cout << "I-------------------------------------------I" << endl;
	cout << "I               Input values:                I" << endl;
	cout << "I-------------------------------------------I" << endl;
	cout << "I   Radius of the cylinder base   I" << setw(7) << fixed << setprecision(2) << r << "      I" << endl;
	cout << "I-------------------------------------------I" << endl;
	cout << "I   Height of the cylinder:       I" << setw(7) << fixed << setprecision(2) << h << "      I" << endl;
	cout << "I-------------------------------------------I" << endl;
	cout << "I           Calculation results:             I" << endl;
	cout << "I-------------------------------------------I" << endl;
	cout << "I  Side surface area of the cylinder  I   " << setw(7) << fixed << setprecision(3) << sb << "     I" << endl;
	cout << "I-------------------------------------------I" << endl;
	cout << "I  Total surface area of the cylinder I   " << setw(7) << fixed << setprecision(3) << sp << "     I" << endl;
	cout << "I-------------------------------------------I" << endl;
	cout << "I            Volume of the cylinder       I   " << setw(7) << fixed << setprecision(3) << v << "     I" << endl;
	cout << "I-------------------------------------------I" << endl;
	// Task 2
	float a1, a2, a3, a4, a5, a, b1, b2, b3, b4, b5, b, x, y, z;
	cout << "Enter the values of three real variables: " << endl;
	cin >> x >> y >> z;
	a1 = y / (2 + pow(y, 2) + fabs(y * z));
	a2 = acos(a1);
	a3 = pi + pow(x, 2) + pow(sin(y * z), 2);
	a4 = pow(a3, 1 / 2);
	a5 = log10(2 / (pow(x, 2) + pow(y, 2) + 1));
	a = a2 * (a4 - a5);
	b1 = exp(-3 * pow(x, 2) + y / 5 - z);
	b2 = pow(tan(x), 2);
	b3 = b2 / (1 + sin(pi * y / 2));
	b4 = pow(b3, 1 / 3);
	b5 = pow((x + y + z) / (x * y * z), 3);
	b = b1 + b4 - b5;
	cout << "Input values and calculation results:" << endl;
	cout << "I-----------------------------------------I" << endl;
	cout << "I              Input values:               I" << endl;
	cout << "I-----------------------------------------I" << endl;
	cout << "I         x=          I        " << fixed << setprecision(2) << x << "       I" << endl;
	cout << "I-----------------------------------------I" << endl;
	cout << "I         y=          I        " << fixed << setprecision(2) << y << "       I" << endl;
	cout << "I-----------------------------------------I" << endl;
	cout << "I         z=          I        " << fixed << setprecision(2) << z << "       I" << endl;
	cout << "I-----------------------------------------I" << endl;
	cout << "I             Calculation results:         I" << endl;
	cout << "I-----------------------------------------I" << endl;
	cout << "I  a1=  I" << setw(9) << fixed << setprecision(2) << a1 << "   I     b1=  I" << setw(6) << setprecision(2) << b1 << "   I" << endl;
	cout << "I-----------------------------------------I" << endl;
	cout << "I  a2=  I" << setw(9) << fixed << setprecision(2) << a2 << "   I     b2=  I" << setw(6) << setprecision(2) << b2 << "   I" << endl;
	cout << "I-----------------------------------------I" << endl;
	cout << "I  a3=  I" << setw(9) << fixed << setprecision(2) << a3 << "   I     b3=  I" << setw(6) << setprecision(2) << b3 << "   I" << endl;
	cout << "I-----------------------------------------I" << endl;
	cout << "I  a4=  I" << setw(9) << fixed << setprecision(2) << a4 << "   I     b4=  I" << setw(6) << setprecision(2) << b4 << "   I" << endl;
	cout << "I-----------------------------------------I" << endl;
	cout << "I  a5=  I" << setw(9) << fixed << setprecision(2) << a5 << "   I     b5=  I" << setw(6) << setprecision(2) << b5 << "   I" << endl;
	cout << "I-----------------------------------------I" << endl;
	cout << "I  a=   I" << setw(9) << fixed << setprecision(2) << a << "   I     b=   I" << setw(6) << setprecision(2) << b << "   I" << endl;
	cout << "I-----------------------------------------I" << endl;
	// Task 3
	char ac = 'A', bc = 'B', cc, dc;
	int ai = 18, bi = -18, ci, di;
	unsigned int au = 18, bu = 24, cu, du;
	float af = 12.34567, bf = 12.234567, cf, df;
	cout << "Enter the values of variables cc and dc of character type:" << endl;
	cin >> cc >> dc;
	cout << "Value of variable ac=" << ac << endl;
	cout << "Value of variable bc=" << bc << endl;
	cout << "Value of variable cc=" << cc << endl;
	cout << "Value of variable dc=" << dc << endl;
	cout << "Enter the values of variables ci and di of signed integer type:" << endl;
	cin >> ci >> di;
	cout << "Value of variable ai=" << ai << endl;
	cout << "Value of variable bi=" << bi << endl;
	cout << "Value of variable ci=" << ci << endl;
	cout << "Value of variable di=" << di << endl;
	cout << "Enter the values of variables cu and du of unsigned integer type:" << endl;
	cin >> cu >> du;
	cout << "Value of variable au=" << endl;
	cout << dec << au << " - in decimal notation" << endl;
	cout << oct << au << " - in octal notation" << endl;
	cout << hex << au << " - in hexadecimal notation" << endl << endl;
	cout << "Value of variable bu=" << endl;
	cout << dec << bu << " - in decimal notation" << endl;
	cout << oct << bu << " - in octal notation" << endl;
	cout << hex << bu << " - in hexadecimal notation" << endl << endl;
	cout << "Value of variable cu=" << endl;
	cout << dec << cu << " - in decimal notation" << endl;
	cout << oct << cu << " - in octal notation" << endl;
	cout << hex << cu << " - in hexadecimal notation" << endl << endl;
	cout << "Value of variable du=" << endl;
	cout << dec << du << " - in decimal notation" << endl;
	cout << oct << du << " - in octal notation" << endl;
	cout << hex << du << " - in hexadecimal notation" << endl << endl;
	cout << "Enter the values of variables cf and df of floating-point type:" << endl;
	cin >> cf >> df;
	cout << "Value of variable af = " << fixed << setprecision(4) << af << endl;
	cout << "Value of variable bf = " << fixed << setprecision(4) << bf << endl;
	cout << "Value of variable cf = " << scientific << cf << endl;
	cout << "Value of variable df = " << scientific << df << endl << endl;
	cout << "Value of variable af = " << setfill('X') << setw(12) << fixed << right << af << endl;
	cout << "Value of variable af = " << setfill('X') << setw(12) << fixed << left << af << endl;
	cout << "Value of variable af = " << setfill('X') << setw(12) << scientific << right << af << endl;
	cout << "Value of variable af = " << setfill('X') << setw(12) << scientific << left << af << endl;
	return 0;
}


//This program performs calculationsand outputs results related to cylinders(surface areaand volume), 
//computes various mathematical expressions involving real variables, and demonstrates input / output 
//operations with different data types(character, integer, unsigned integer, and floating - point).