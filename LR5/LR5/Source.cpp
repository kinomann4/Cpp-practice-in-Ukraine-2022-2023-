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
	cout << "������ ����� �������� ��� ������� �������� (�� 1 �� 4, 0 - ��� ������): ";
	cin >> number;
	switch (number)
	{
	case 1: {
		//lab_work_05_01(var 4)
		float x, y, a, b;
		float const e = 2.718;
		cout << "������ �������� ��������� �������: ";
		cin >> x;
		cout << "������ �������� ��������� a �� b ������� (����� �����): ";
		cin >> a >> b;
		if (x < 1) y = pow(fabs(a + (b * x)), 0.25);
		else if ((x >= 1) && (x < 2)) y = pow(log10(pow(x, 2) + x), 2);
		else y = pow(e, (b + 3));
		cout << "�������� ������� y = " << y << endl; goto start2; }
	case 2: {
		//lab_work_05_02(var 4)
		float X;
		float Y;
		cout << "������ �������� ������� �� �������� ����� M (����� �����): ";
		cin >> X >> Y;
		if ((X <= 1) && (Y <= 1)) {
			if (fabs(X) && -fabs(X)) cout << "x = " << X << " y = " << Y << "\n����� M(x, y) �������� ������������ ������" << endl; goto start2;
		}
		else cout << "x = " << X << " y = " << Y << "\n����� M(x, y) �� �������� ������������ ������ " << endl; goto start2; }
	case 3: {
		//lab_work_05_03(var 4)
		float A, B;
		int action;
	start1:
		cout << "������ ��������� (����� �����): ";
		cin >> A >> B;
		cout << "������ 1 ��� ���� ��� ������������ ������ ����� ��� 2, ��� ��������� ��������� �������� 3: ";
		cin >> action;
		switch (action) {
		case 1:
			if (((A < 0) && (B > 0)) || ((B < 0) && (A > 0))) { A *= -1; B *= -1; }
			else { A *= 0; B *= 0; }
			cout << "����� �������� ���������: " << A << " �� " << B << endl; goto start1;
		case 2: break; goto start2;	
		default: cout << "������� ������ �������� 䳿"; goto start1;}
		} goto start2;
	case 4: {
		//lab_work_05_04(var 4)
		int theme, money;
		char var;
		string topicName, variantName;
		cout << "������ ����� ���� (1-�������, 2 - � ���� ����������, 3 - � ���� ��������� ����������): ";
		cin >> theme;
		switch (theme)
		{
		case 1:
			topicName = "�������"; break;
		case 2:
			topicName = "� ���� ����������"; break;
		case 3:
			topicName = "� ���� ��������� ����������"; break;
		default:
			topicName = "�� ����� ������������ ����� ����";
			cout << "������������ ����� ����!" << endl;
		}
		cout << "������ ������ (a, b, c): ";
		cin >> var;
		switch (var) 
		{
		case 'a':
			variantName = "������ �"; break;
		case 'b':
			variantName = "������ b"; break;
		case 'c':
			variantName = "������ c"; break;
		default:
			variantName = "�� ����� ����������� �������� �������";
			cout << "������������ ������!" << endl;
		}
		cout << "���������: " << topicName << ", " << variantName << endl;
		cout << "������ ������ ������ (5, 10, 20 �������): ";
		cin >> money;
		switch (money) {
		case 5:
			cout << "���� �����: 2��. + 1��." << endl; goto start2;
		case 10:
			cout << "���� �����: 5��. + 2��. + 1��." << endl; goto start2;
		case 20:
			cout << "���� �����: 10��. + 5��. + 2��. + 1��." << endl; goto start2;
		default:
			cout << "�� ����� ������ �������� ������" << endl; goto start2;}
		}
	case 0: break;
	default: cout << "������ ������ �������� �� ����, ��������� �� ���" << endl; goto start2;
	}
	return 0;
}