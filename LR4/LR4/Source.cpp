# include <iomanip>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//�������� 1
	float num1, num2, num3;
    cout << "������ ����� �����: ";
    cin >> num1;
    cout << "������ ����� �����: ";
    cin >> num2;
    cout << "������ ���� �����: ";
    cin >> num3;
    if (num1 > 0) num1 = pow(num1, 2);
    if (num2 > 0) num2 = pow(num2, 2);
    if (num3 > 0) num3 = pow(num3, 2);
    cout << "���������: " << num1 << " " << num2 << " " << num3 << endl;
    //�������� 2
    int num, digit1, digit2, digit3, sum, product;
    cout << "������ ���������� �����: ";
    cin >> num;
    digit1 = num / 100;
    digit2 = (num / 100) % 10;
    digit3 = num % 10;
    sum = digit1 + digit2 + digit3;
    product = digit1 * digit2 * digit3;
    if (sum > 10 && sum < 99) cout << "���� � ���������� ������: " << sum << endl;
    else cout << "���� �� � ���������� ������: " << sum << endl;
    if (product > 100 && product < 999) cout << "������� � ���������� ������: " << product << endl;
    else cout << "������� �� � ���������� ������: " << product << endl;
    //�������� 3
    float price, quantity;
    int day;
    cout << "������ ������� ���� ������: ";
    cin >> price;
    cout << "������ ������� �����: ";
    cin >> quantity;
    cout << "������ ���� ������ (������): ";
    cin >> day;
    if (day == 6 || day == 7) cout << "������� ���������� ���������: " << 0.85 * price * quantity << endl;
    else cout << "������� ���������� ���������: " << price * quantity << endl;
    //�������� 4
    float x, y;
    cout << "������ �������� ���������� x: ";
    cin >> x;
    cout << "������ �������� ���������� y: ";
    cin >> y;
    if (y <= - pow(x, 2) + 2 && fabs(x) <= fabs(y)) cout << "����� �������� �������� ��������";
    else  cout << "����� �� �������� �������� ��������";
    return 0;
}