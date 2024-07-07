# include <iomanip>
#include <windows.h>
#include <iostream>
using namespace std;
int getRandomNumber(int min, int max)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}