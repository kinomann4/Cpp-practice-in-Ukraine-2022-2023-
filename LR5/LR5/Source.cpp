# include <iomanip>
# include <windows.h>
# include <iostream>
# include <math.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int number;
	start2:
	cout << "Введіть номер завдання яке потрібно виконати (від 1 до 4, 0 - для вихода): ";
	cin >> number;
	switch (number)
	{
	case 1: {
		//lab_work_05_01(var 4)
		float x, y, a, b;
		float const e = 2.718;
		cout << "Введіть значення аргумента функції: ";
		cin >> x;
		cout << "Введіть значення параметрів a та b функції (через пробіл): ";
		cin >> a >> b;
		if (x < 1) y = pow(fabs(a + (b * x)), 0.25);
		else if ((x >= 1) && (x < 2)) y = pow(log10(pow(x, 2) + x), 2);
		else y = pow(e, (b + 3));
		cout << "Значення функції y = " << y << endl; goto start2; }
	case 2: {
		//lab_work_05_02(var 4)
		float X;
		float Y;
		cout << "Введіть значення абсциси та ординати точки M (через проібл): ";
		cin >> X >> Y;
		if ((X <= 1) && (Y <= 1)) {
			if (fabs(X) && -fabs(X)) cout << "x = " << X << " y = " << Y << "\nТочка M(x, y) належить заштрихованій області" << endl; goto start2;
		}
		else cout << "x = " << X << " y = " << Y << "\nТочка M(x, y) не належить заштрихованій області " << endl; goto start2; }
	case 3: {
		//lab_work_05_03(var 4)
		float A, B;
		int action;
	start1:
		cout << "Введіть параметри (через пробіл): ";
		cin >> A >> B;
		cout << "Введіть 1 для того щоб протестувати введені числа або 2, щоб завершити виконання завдання 3: ";
		cin >> action;
		switch (action) {
		case 1:
			if (((A < 0) && (B > 0)) || ((B < 0) && (A > 0))) { A *= -1; B *= -1; }
			else { A *= 0; B *= 0; }
			cout << "Змінені значення параметрів: " << A << " та " << B << endl; goto start1;
		case 2: break; goto start2;	
		default: cout << "Введено невірне значення дії"; goto start1;}
		} goto start2;
	case 4: {
		//lab_work_05_04(var 4)
		int theme, money;
		char var;
		string topicName, variantName;
		cout << "Введіть номер теми (1-Новорічні, 2 - З Днем Народження, 3 - С Днем Захисника Батьківщини): ";
		cin >> theme;
		switch (theme)
		{
		case 1:
			topicName = "Новорічні"; break;
		case 2:
			topicName = "З Днем Народження"; break;
		case 3:
			topicName = "С Днем Захисника Батьківщини"; break;
		default:
			topicName = "Ви ввели неправильний номер теми";
			cout << "Неправильний номер теми!" << endl;
		}
		cout << "Введіть варіант (a, b, c): ";
		cin >> var;
		switch (var) 
		{
		case 'a':
			variantName = "варіант а"; break;
		case 'b':
			variantName = "варіант b"; break;
		case 'c':
			variantName = "варіант c"; break;
		default:
			variantName = "ви ввели неправильне значення варіанту";
			cout << "Неправильний варіант!" << endl;
		}
		cout << "Результат: " << topicName << ", " << variantName << endl;
		cout << "Введіть купюру оплати (5, 10, 20 гривень): ";
		cin >> money;
		switch (money) {
		case 5:
			cout << "Ваша решта: 2гр. + 1гр." << endl; goto start2;
		case 10:
			cout << "Ваша решта: 5гр. + 2гр. + 1гр." << endl; goto start2;
		case 20:
			cout << "Ваша решта: 10гр. + 5гр. + 2гр. + 1гр." << endl; goto start2;
		default:
			cout << "Ви ввели невірне значення купюри" << endl; goto start2;}
		}
	case 0: break;
	default: cout << "Такого номера завдання не існує, спробуйте ще раз" << endl; goto start2;
	}
	return 0;
}