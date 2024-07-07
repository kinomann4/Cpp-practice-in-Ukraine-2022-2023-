# include <iomanip>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Завдання 1 
	float pi = 3.14159, c, h, k, B, t, E;
	c = 2.997924 * pow(10, 2);
	h = 6.626 * pow(10, -34);
	B = 1.38 * pow(10, -23);
	cout << "Введіть довжину хвилі: " << endl;
	cin >> k;
	((k <= 0) || (k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z'))?
		cout << "Введене неправильне значення" << endl :
		cout << "Введіть значення температури: " << endl;
	cin >> t;
	(t <= 0) || (t >= 'a' && t <= 'z') || (t >= 'A' && t <= 'Z') ?
		cout << "Введене неправильне значення" << endl:
		cout << "Енергія становить: " << (2 * pi * c * h * pow(k, -5)) / exp(c * h / B * k * pow(t, -1)) << endl;
	//Завдання 2
	float x, a, H, y;
	cout << "Введіть значення x, a та h через пробіл:";
	cin >> x >> a >> H;
	y = (pow(atan(pow(x, 3)) + cos(pow(x,1/2)), 2 * x)/(pow(H, x)+log10(fabs(2.4*pow(x,3))))) - a;
	cout << "Значення змінної y становить: " << y << endl;
	//Завдання 3
	char sym = '&';
	cout << sym << sym << sym << sym << sym << sym << sym << sym << sym << sym <<
		setw(11) << sym << setw(12) << sym << setw(14) << sym << sym << sym << sym << endl;
	cout << sym << setw(19) << sym << setw(2) << sym << setw(10) << sym << setw(2) << sym << setw(12) << sym << endl;
	cout << sym << setw(18) << sym << setw(4) << sym << setw(8) << sym << setw(4) << sym << setw(10) << sym << endl;
	cout << sym << setw(17) << sym << setw(6) << sym << setw(6) << sym << setw(6) << sym << setw(9) << sym << sym << sym << sym << endl;
	cout << sym << setw(16) << sym << setw(8) << sym << setw(4) << sym << setw(8) << sym << setw(8) << sym << endl;
	cout << sym << setw(15) << sym << setw(10) << sym << setw(2) << sym << setw(10) << sym << setw(8) << sym << endl;
	cout << sym << setw(14) << sym << setw(12) << sym << setw(12) << sym << setw(8) << sym << sym << sym << sym << endl;
	//Завдання 4
	char FIO_1[100], FIO_2[100], FIO_3[100], FIO_4[100], FIO_5[100], FIO_6[100], FIO_7[100], FIO_8[100], FIO_9[100], FIO_10[100], 
		grupa_1[100], grupa_2[100], grupa_3[100], grupa_4[100], grupa_5[100], grupa_6[100], grupa_7[100], grupa_8[100], grupa_9[100], grupa_10[100];
	int kurz_1, kurz_2, kurz_3, kurz_4, kurz_5, kurz_6, kurz_7, kurz_8, kurz_9, kurz_10;
	int bal_1, bal_2, bal_3, bal_4, bal_5;
	float avarge_1, avarge_2, avarge_3, avarge_4, avarge_5, avarge_6, avarge_7, avarge_8, avarge_9, avarge_10;
	char stip_1, stip_2, stip_3, stip_4, stip_5, stip_6, stip_7, stip_8, stip_9, stip_10;
	int Percent = 0, result_2, quality = 0, result_1;

	cout << "Введіть ПІБ, номер курсу та назву групи(через пробіл) першого студента: ";
	cin >> FIO_1 >> kurz_1 >> grupa_1;
	cout << "Введіть оцінки цього студненту через пробіл (5 оцінок): ";
	cin >> bal_1 >> bal_2 >> bal_3 >> bal_4 >> bal_5;
	avarge_1 = (bal_1 + bal_2 + bal_3 + bal_4 + bal_5) / 5;

	cout << "Введіть ПІБ, номер курсу та назву групи(через пробіл) другого студента: ";
	cin >> FIO_2 >> kurz_2 >> grupa_2;
	cout << "Введіть оцінки цього студненту через пробіл (5 оцінок): ";
	cin >> bal_1 >> bal_2 >> bal_3 >> bal_4 >> bal_5;
	avarge_2 = (bal_1 + bal_2 + bal_3 + bal_4 + bal_5) / 5;

	cout << "Введіть ПІБ, номер курсу та назву групи(через пробіл) третього студента: ";
	cin >> FIO_3 >> kurz_3 >> grupa_3;
	cout << "Введіть оцінки цього студненту через пробіл (5 оцінок): ";
	cin >> bal_1 >> bal_2 >> bal_3 >> bal_4 >> bal_5;
	avarge_3 = (bal_1 + bal_2 + bal_3 + bal_4 + bal_5) / 5;

	cout << "Введіть ПІБ, номер курсу та назву групи(через пробіл) четвертого студента: ";
	cin >> FIO_4 >> kurz_4 >> grupa_4;
	cout << "Введіть оцінки цього студненту через пробіл (5 оцінок): ";
	cin >> bal_1 >> bal_2 >> bal_3 >> bal_4 >> bal_5;
	avarge_4 = (bal_1 + bal_2 + bal_3 + bal_4 + bal_5) / 5;

	cout << "Введіть ПІБ, номер курсу та назву групи(через пробіл) п'ятого студента: ";
	cin >> FIO_5 >> kurz_5 >> grupa_5;
	cout << "Введіть оцінки цього студненту через пробіл (5 оцінок): ";
	cin >> bal_1 >> bal_2 >> bal_3 >> bal_4 >> bal_5;
	avarge_5 = (bal_1 + bal_2 + bal_3 + bal_4 + bal_5) / 5;

	cout << "Введіть ПІБ, номер курсу та назву групи(через пробіл) шостого студента: ";
	cin >> FIO_6 >> kurz_6 >> grupa_6;
	cout << "Введіть оцінки цього студненту через пробіл (5 оцінок): ";
	cin >> bal_1 >> bal_2 >> bal_3 >> bal_4 >> bal_5;
	avarge_6 = (bal_1 + bal_2 + bal_3 + bal_4 + bal_5) / 5;

	cout << "Введіть ПІБ, номер курсу та назву групи(через пробіл) сьомого студента: ";
	cin >> FIO_7 >> kurz_7 >> grupa_7;
	cout << "Введіть оцінки цього студненту через пробіл (5 оцінок): ";
	cin >> bal_1 >> bal_2 >> bal_3 >> bal_4 >> bal_5;
	avarge_7 = (bal_1 + bal_2 + bal_3 + bal_4 + bal_5) / 5;

	cout << "Введіть ПІБ, номер курсу та назву групи(через пробіл) восьмого студента: ";
	cin >> FIO_8 >> kurz_8 >> grupa_8;
	cout << "Введіть оцінки цього студненту через пробіл (5 оцінок): ";
	cin >> bal_1 >> bal_2 >> bal_3 >> bal_4 >> bal_5;
	avarge_8 = (bal_1 + bal_2 + bal_3 + bal_4 + bal_5) / 5;

	cout << "Введіть ПІБ, номер курсу та назву групи(через пробіл) дев'ятого студента: ";
	cin >> FIO_9 >> kurz_9 >> grupa_9;
	cout << "Введіть оцінки цього студненту через пробіл (5 оцінок): ";
	cin >> bal_1 >> bal_2 >> bal_3 >> bal_4 >> bal_5;
	avarge_9 = (bal_1 + bal_2 + bal_3 + bal_4 + bal_5) / 5;

	cout << "Введіть ПІБ, номер курсу та назву групи(через пробіл) десятого студента: ";
	cin >> FIO_10 >> kurz_10 >> grupa_10;
	cout << "Введіть оцінки цього студненту через пробіл (5 оцінок): ";
	cin >> bal_1 >> bal_2 >> bal_3 >> bal_4 >> bal_5;
	avarge_10 = (bal_1 + bal_2 + bal_3 + bal_4 + bal_5) / 5;

	(avarge_1 < 4.00) ? stip_1 = '-' : stip_1 = '+';
	(avarge_2 < 4.00) ? stip_2 = '-' : stip_2 = '+';
	(avarge_3 < 4.00) ? stip_3 = '-' : stip_3 = '+';
	(avarge_4 < 4.00) ? stip_4 = '-' : stip_4 = '+';
	(avarge_5 < 4.00) ? stip_5 = '-' : stip_5 = '+';
	(avarge_6 < 4.00) ? stip_6 = '-' : stip_6 = '+';
	(avarge_7 < 4.00) ? stip_7 = '-' : stip_7 = '+';
	(avarge_8 < 4.00) ? stip_8 = '-' : stip_8 = '+';
	(avarge_9 < 4.00) ? stip_9 = '-' : stip_9 = '+';
	(avarge_10 < 4.00) ? stip_10 = '-' : stip_10 = '+';

	(avarge_1 > 2.00) ? Percent += 1 : Percent += 0;
	(avarge_2 > 2.00) ? Percent += 1 : Percent += 0;
	(avarge_3 > 2.00) ? Percent += 1 : Percent += 0;
	(avarge_4 > 2.00) ? Percent += 1 : Percent += 0;
	(avarge_5 > 2.00) ? Percent += 1 : Percent += 0;
	(avarge_6 > 2.00) ? Percent += 1 : Percent += 0;
	(avarge_7 > 2.00) ? Percent += 1 : Percent += 0;
	(avarge_8 > 2.00) ? Percent += 1 : Percent += 0;
	(avarge_9 > 2.00) ? Percent += 1 : Percent += 0;
	(avarge_10 > 2.00) ? Percent += 1 : Percent += 0;
	result_1 = Percent * 10;

	(avarge_1 < 4.00) ? quality += 0 : quality += 1;
	(avarge_2 < 4.00) ? quality += 0 : quality += 1;
	(avarge_3 < 4.00) ? quality += 0 : quality += 1;
	(avarge_4 < 4.00) ? quality += 0 : quality += 1;
	(avarge_5 < 4.00) ? quality += 0 : quality += 1;
	(avarge_6 < 4.00) ? quality += 0 : quality += 1;
	(avarge_7 < 4.00) ? quality += 0 : quality += 1;
	(avarge_8 < 4.00) ? quality += 0 : quality += 1;
	(avarge_9 < 4.00) ? quality += 0 : quality += 1;
	(avarge_10 < 4.00) ? quality += 0 : quality += 1;
	result_2 = quality * 10;

	cout << "------------------------------------------------------------------------------" << endl;
	cout << "| #|" << setw(13) << "FIO" << "         |   kurs   |         grupa         | Sr.bal | Stip |" << endl;
	cout << "------------------------------------------------------------------------------" << endl;

	cout << "| 1|" << left << setw(16) << FIO_1 << "      |"
		<< right << setw(6) << kurz_1 << "    |"
		<< left << setw(16) << grupa_1 << "       |"
		<< right << fixed << setprecision(2) << setw(6) << avarge_1 << "  |"
		<< right << setw(4) << stip_1 << "  |" << endl;

	cout << "------------------------------------------------------------------------------" << endl;

	cout << "| 2|" << left << setw(16) << FIO_2 << "      |"
		<< right << setw(6) << kurz_2 << "    |"
		<< left << setw(16) << grupa_2 << "       |"
		<< right << fixed << setprecision(2) << setw(6) << avarge_2 << "  |"
		<< right << setw(4) << stip_2 << "  |" << endl;

	cout << "------------------------------------------------------------------------------" << endl;

	cout << "| 3|" << left << setw(16) << FIO_3 << "      |"
		<< right << setw(6) << kurz_3 << "    |"
		<< left << setw(16) << grupa_3 << "       |"
		<< right << fixed << setprecision(2) << setw(6) << avarge_3 << "  |"
		<< right << setw(4) << stip_3 << "  |" << endl;

	cout << "------------------------------------------------------------------------------" << endl;

	cout << "| 4|" << left << setw(16) << FIO_4 << "      |"
		<< right << setw(6) << kurz_4 << "    |"
		<< left << setw(16) << grupa_4 << "       |"
		<< right << fixed << setprecision(2) << setw(6) << avarge_4 << "  |"
		<< right << setw(4) << stip_4 << "  |" << endl;

	cout << "------------------------------------------------------------------------------" << endl;

	cout << "| 5|" << left << setw(16) << FIO_5 << "      |"
		<< right << setw(6) << kurz_5 << "    |"
		<< left << setw(16) << grupa_5 << "       |"
		<< right << fixed << setprecision(2) << setw(6) << avarge_5 << "  |"
		<< right << setw(4) << stip_5 << "  |" << endl;

	cout << "------------------------------------------------------------------------------" << endl;

	cout << "| 6|" << left << setw(16) << FIO_6 << "      |"
		<< right << setw(6) << kurz_6 << "    |"
		<< left << setw(16) << grupa_6 << "       |"
		<< right << fixed << setprecision(2) << setw(6) << avarge_6 << "  |"
		<< right << setw(4) << stip_6 << "  |" << endl;

	cout << "------------------------------------------------------------------------------" << endl;

	cout << "| 7|" << left << setw(16) << FIO_7 << "      |"
		<< right << setw(6) << kurz_7 << "    |"
		<< left << setw(16) << grupa_7 << "       |"
		<< right << fixed << setprecision(2) << setw(6) << avarge_7 << "  |"
		<< right << setw(4) << stip_7 << "  |" << endl;

	cout << "------------------------------------------------------------------------------" << endl;

	cout << "| 8|" << left << setw(16) << FIO_8 << "      |"
		<< right << setw(6) << kurz_8 << "    |"
		<< left << setw(16) << grupa_8 << "       |"
		<< right << fixed << setprecision(2) << setw(6) << avarge_8 << "  |"
		<< right << setw(4) << stip_8 << "  |" << endl;

	cout << "------------------------------------------------------------------------------" << endl;

	cout << "| 9|" << left << setw(16) << FIO_9 << "      |"
		<< right << setw(6) << kurz_9 << "    |"
		<< left << setw(16) << grupa_9 << "       |"
		<< right << fixed << setprecision(2) << setw(6) << avarge_9 << "  |"
		<< right << setw(4) << stip_9 << "  |" << endl;

	cout << "------------------------------------------------------------------------------" << endl;

	cout << "|10|" << left << setw(16) << FIO_10 << "      |"
		<< right << setw(6) << kurz_10 << "    |"
		<< left << setw(16) << grupa_10 << "       |"
		<< right << fixed << setprecision(2) << setw(6) << avarge_10 << "  |"
		<< right << setw(4) << stip_10 << "  |" << endl;

	cout << "------------------------------------------------------------------------------" << endl;

	cout << setw(62) << "prograss |" << result_1 << "%            |" << endl;
	cout << "------------------------------------------------------------------------------" << endl;
	cout << setw(62) << "quality  |" << result_2 << "%            |" << endl;
	cout << "------------------------------------------------------------------------------" << endl;

	return 0;
}
