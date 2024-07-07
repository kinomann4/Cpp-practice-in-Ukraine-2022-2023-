#include <iostream>
#include <windows.h> // For Windows specific console functions
#include <math.h>    // For mathematical functions like pi
#define pi 3.14159    // Definition of pi as a constant
using namespace std;

// Function prototypes for geometric calculations
float SurfaceArea_cylinder(float rc, float hc);
float TotalSurfaceArea_cylinder(float rc, float hc);
float Volume_cylinder(float rc, float hc);
float SurfaceArea_cone(float rc, float lc);
float TotalSurfaceArea_cone(float rc, float lc);
float Volume_cone(float hc, float rc);
float SurfaceArea_rectangular(float ac, float bc, float cc);
float Volume_rectangular(float ac, float bc, float cc);

// Function prototypes for input/output
void Output_func_1() { cout << "\n Enter the radius of the cylinder base: "; }
void Output_func_2() { cout << "\n Enter the height of the cylinder: "; }
void Output_func_3(float rc, float hc) { cout << "\n Lateral surface area of the cylinder sb=" << SurfaceArea_cylinder(rc, hc) << endl; }
void Output_func_4(float rc, float hc) { cout << " Total surface area of the cylinder sp=" << TotalSurfaceArea_cylinder(rc, hc) << endl; }
void Output_func_5(float rc, float hc) { cout << " Volume of the cylinder v=" << Volume_cylinder(rc, hc) << endl; }
void Input_func_r(float& rc) { cin >> rc; }
void Input_func_h(float& hc) { cin >> hc; }

void Output_func_6() { cout << "\n Enter the radius of the cone base: "; }
void Output_func_7() { cout << "\n Enter the height of the cone: "; }
void Output_func_8() { cout << "\n Enter the slant height of the cone: "; }
void Output_func_9(float rc, float lc) { cout << "\n Lateral surface area of the cone sb=" << SurfaceArea_cone(rc, lc) << endl; }
void Output_func_10(float rc, float lc) { cout << " Total surface area of the cone sp=" << TotalSurfaceArea_cone(rc, lc) << endl; }
void Output_func_11(float hc, float rc) { cout << " Volume of the cone v=" << Volume_cone(hc, rc) << endl; }
void Input_func_l(float& lc) { cin >> lc; }

void Output_func_12() { cout << "\n Enter the sides of the rectangular parallelepiped (separated by spaces): "; }
void Input_func_abc(float& ac, float& bc, float& cc) { cin >> ac >> bc >> cc; }
void Output_func_13(float ac, float bc, float cc) { cout << "\n Total surface area of the rectangular parallelepiped sp=" << SurfaceArea_rectangular(ac, bc, cc) << endl; }
void Output_func_14(float ac, float bc, float cc) { cout << "\n Volume of the rectangular parallelepiped v=" << Volume_rectangular(ac, bc, cc) << endl; }

void multiple(char& ic, float& rc, float& hc, float& lc, float& ac, float& bc, float& cc, int& choice_c)
{
	while (true)
	{
		cout << "Enter '!', to exit or any other character to continue: ";
		cin >> ic;
		if (ic == '!') break;
		else
		{
			cout << "Choose a geometric shape: 1 - cylinder, 2 - cone, 3 - rectangular parallelepiped: ";
			cin >> choice_c;
			switch (choice_c)
			{
			case 1:
			{
				Output_func_1();
				Input_func_r(rc);
				Output_func_2();
				Input_func_h(hc);
				Output_func_3(rc, hc);
				Output_func_4(rc, hc);
				Output_func_5(rc, hc); break;
			}
			case 2:
			{
				Output_func_6();
				Input_func_r(rc);
				Output_func_7();
				Input_func_h(hc);
				Output_func_8();
				Input_func_l(lc);
				Output_func_9(rc, lc);
				Output_func_10(rc, lc);
				Output_func_11(hc, rc); break;
			}
			case 3:
			{
				Output_func_12();
				Input_func_abc(ac, bc, cc);
				Output_func_13(ac, bc, cc);
				Output_func_14(ac, bc, cc); break;
			}
			default: cout << "No such geometric shape exists" << endl;
			}
		}
	}
}

int main() {
	SetConsoleCP(1251);         // Set console input to CP1251 encoding (Cyrillic)
	SetConsoleOutputCP(1251);   // Set console output to CP1251 encoding (Cyrillic)
	float r, h, l, a, b, c;     // Declaration of variables for dimensions
	char i;                     // Variable to store user input for exit
	int choice;                 // Variable to store user choice of geometric shape
	multiple(i, r, h, l, a, b, c, choice); // Function call to manage calculations and input/output
	return 0;
}

// Functions for calculating surface areas and volumes

float SurfaceArea_cylinder(float rc, float hc) { return 2 * pi * rc * hc; }
float TotalSurfaceArea_cylinder(float rc, float hc) { return SurfaceArea_cylinder(rc, hc) + 2 * pi * rc * rc; }
float Volume_cylinder(float rc, float hc) { return pi * rc * rc * hc; }

float SurfaceArea_cone(float rc, float lc) { return pi * rc * lc; }
float TotalSurfaceArea_cone(float rc, float lc) { return SurfaceArea_cone(rc, lc) + pi * rc * rc; }
float Volume_cone(float hc, float rc) { return (pi * rc * rc * hc) / 3; }

float SurfaceArea_rectangular(float ac, float bc, float cc) { return 2 * ((ac * bc) + (ac * cc) + (bc * cc)); }
float Volume_rectangular(float ac, float bc, float cc) { return ac * bc * cc; }


//Usage:
//Users interact with the program by entering dimensions for the chosen geometric figure(cylinder, cone, or rectangular parallelepiped).
//Results for surface areasand volumes are displayed in English.
//The program continues to execute until the user chooses to exit by entering '!'.
//This structure ensures clarity and modularity, separating calculations from input 
/// output operations and providing a user - friendly interface for geometric calculations