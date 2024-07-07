#include <iostream>
#include <iomanip>
#include <math.h>
#include <windows.h>
#define N 100
using namespace std;
void OneDimArrInp(float a[N], int* nn);
void OneDimArrOut(float a[N], int nn);
void OneDimArrTab(float a[N], float b[N], int nn);
int i, n;
float y[100], x[100]; // = { -5,3,13,4.3,2.8,3.14,0,8,9.3,10.4 };
//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	//��� �������i� ������ x:
//	OneDimArrInp(x, &n);
//	//���� �������i� ������ x:
//	OneDimArrOut(x, n);
//	//����������� ������� y=f(x):
//	OneDimArrTab(x, y, n);
//}
//// ������� �������� ������� ������������ ������:
//void OneDimArrInp(float a[N], int* nn) {
//	cout << "\n ����� ������� �������� ������������ ������: ";
//	cin >> *nn;
//	for (int i = 0; i < *nn; i++) {
//		cout << "\n ����� �������� �������� a[" << i << "]=";
//		cin >> *(a + i);
//	}
//}
//// ������� ��������� ������� ������������ ������ �� �����:
//void OneDimArrOut(float a[N], int nn) {
//	cout << "\n ����������� ����� a:";
//	cout << "\n ";
//	for (int i = 0; i < nn; i++)
//		cout << *(a + i) << " ";
//	cout << "\n ";
//	cout << "\n �������� ����-��� ������, ��� ����������...\n";
//}
//// ������� ����������� � ��������� �� ����� ������� �������,
//// �������� ��� ������ ����������� �������:
//void OneDimArrTab(float a[N], float b[N], int nn) {
//	cout << "\n\n ���������� �����������:\n" << setw(5);
//	for (i = 0; i < nn; i++) {
//		*(b + i) = pow(sin(3 * (*(a + i))), 2);
//		cout << "\n x[" << i << "]=" << setw(5) << *(a + i) << " y[" << i << "] = " << *(b + i);
//	}
//	cout << "\n\n ����'���� ������ ���������!";
//}
int s_neg(int a[5])
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		if (a[i] < 0)
		{
			sum += a[i];
		}
	}
	return sum;
}
void func1(int a[5], int sum_neg)
{
	for (int i = 0; i < 5; i++)
	{
		cout << "��� " << a[i] << " ������� ���������: " << pow(log(a[i]+5) - sum_neg, 0.33) << endl;
	}
}
int func2(int arr[], int size) {
	int min_in = 0, max_in = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < arr[min_in]) {
			min_in = i;
		}
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] > arr[max_in]) {
			max_in = i;
		}
	}
	int count = abs(max_in - min_in) - 1;
	return count;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//�������� 1
	/*int const n = 5;
	int a[n] = { 0,-3, 2, -4, -1 };
	cout << "���� ��'����� �������� ������: " << s_neg(a) << endl;
	func1(a, s_neg(a));*/
	//�������� 2
	int const num = 8;
	int arr[num] = { 3, 57, -1, 12, 32, 5, -31, 19 };
	cout << "������� �����: " << endl;
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl << "ʳ������ �������� �� ���������� � ��������� ���������� ������: " << func2(arr, num);
	return 0;

}