#include <iomanip>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;

// Function prototypes for tasks
void task_1();
void task_2();
void task_3();
void menu();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	menu();
	return 0;
}

// Function for Task 1
void task_1()
{
	int ic;
	cout << "Enter the number of repetitions (integer): ";
	cin >> ic;
	while (ic > 0)
	{
		cout << "% % %" << endl << "%   %" << endl << "% % %" << endl << "-----" << endl;
		ic -= 1;
	}
	cout << endl << endl;
}

// Function to generate a random number within a specified range
int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

// Function for Task 2
void task_2()
{
	int sum = 0, count = 0, min_element = 50, min = -5, max = 48;
	cout << "Generated sequence:" << endl;
	while (count < 10)
	{
		int rand_num = getRandomNumber(-5, 48);
		cout << "\t" << rand_num;
		if (rand_num % 2 == 1) sum += rand_num; // Sum of all odd elements
		if (rand_num < min_element) min_element = rand_num; // Find minimum element
		count += 1;
	}
	cout << endl << "Sum of all odd elements: " << sum << ", and their count: " << count << endl;
	cout << "Minimum element in the sequence: " << min_element << endl;
}

// Function for Task 3
void task_3()
{
	float x;
	int k = 0;
	cout << "Calculating tangent values" << endl;
	while (k < 3)
	{
		cout << "Enter the argument of the tangent: ";
		cin >> x;
		cout << "Tangent value is: " << tan(x) << endl; // Calculating tangent using tan function
		k += 1;
	}
}

// Menu for selecting tasks
void menu()
{
	char choice;
	int task_number;
	while (true)
	{
		cout << "Enter '!' to terminate execution or any other character to continue: ";
		cin >> choice;
		if (choice == '!') break;
		else
		{
			cout << "Enter the task number (1 to 3): ";
			cin >> task_number;
			switch (task_number)
			{
			case 1: task_1(); break;
			case 2: task_2(); break;
			case 3: task_3(); break;
			default: cout << "Task number does not exist" << endl; break;
			}
		}
	}
}


//This code structure allows users to interactively selectand execute one of 
//the three tasks repeatedly until they decide to exit.Each task performs 
//distinct operations based on user input or random number generation.