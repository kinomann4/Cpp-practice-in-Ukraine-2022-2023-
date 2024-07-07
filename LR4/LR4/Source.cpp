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
	float num1, num2, num3;
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть друге число: ";
    cin >> num2;
    cout << "Введіть третє число: ";
    cin >> num3;
    if (num1 > 0) num1 = pow(num1, 2);
    if (num2 > 0) num2 = pow(num2, 2);
    if (num3 > 0) num3 = pow(num3, 2);
    cout << "Результат: " << num1 << " " << num2 << " " << num3 << endl;
    //Завдання 2
    int num, digit1, digit2, digit3, sum, product;
    cout << "Введіть тризначнне число: ";
    cin >> num;
    digit1 = num / 100;
    digit2 = (num / 100) % 10;
    digit3 = num % 10;
    sum = digit1 + digit2 + digit3;
    product = digit1 * digit2 * digit3;
    if (sum > 10 && sum < 99) cout << "Сума є двозначним числом: " << sum << endl;
    else cout << "Сума не є двозначним числом: " << sum << endl;
    if (product > 100 && product < 999) cout << "Добуток є тризначним числом: " << product << endl;
    else cout << "Добуток не є тризначним числом: " << product << endl;
    //Завдання 3
    float price, quantity;
    int day;
    cout << "Введіть вартість однієї години: ";
    cin >> price;
    cout << "Введіть кількість годин: ";
    cin >> quantity;
    cout << "Введіть день тиждня (числом): ";
    cin >> day;
    if (day == 6 || day == 7) cout << "Вартість переговорів становить: " << 0.85 * price * quantity << endl;
    else cout << "Вартість переговорів становить: " << price * quantity << endl;
    //Завдання 4
    float x, y;
    cout << "Введіть значення координати x: ";
    cin >> x;
    cout << "Введіть значення координати y: ";
    cin >> y;
    if (y <= - pow(x, 2) + 2 && fabs(x) <= fabs(y)) cout << "Точка належить заданому діапазону";
    else  cout << "Точка не належить заданому діапазону";
    return 0;
}