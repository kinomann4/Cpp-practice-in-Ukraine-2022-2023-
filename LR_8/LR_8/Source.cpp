#include <iostream>
#include <windows.h>
#include <math.h>
#define pi 3.14159
using namespace std;

// Function prototypes for cylinder calculations
float SurfaceArea_cylinder(float rc, float hc);
float TotalSurfaceArea_cylinder(float rc, float hc);
float Volume_cylinder(float rc, float hc);

// Function prototypes for cone calculations
float SurfaceArea_cone(float rc, float lc);
float TotalSurfaceArea_cone(float rc, float lc);
float Volume_cone(float hc, float rc);

// Function prototypes for rectangular parallelepiped calculations
float TotalSurfaceArea_parallelepiped(float ac, float bc, float cc);
float Volume_parallelepiped(float ac, float bc, float cc);

// Output functions for cylinder
void Output_cylinder_radius() { cout << "\nEnter the radius of the cylinder base: "; }
void Output_cylinder_height() { cout << "\nEnter the height of the cylinder: "; }
void Output_cylinder_lateral_surface_area(float rc, float hc) { cout << "\nLateral surface area of the cylinder sb=" << SurfaceArea_cylinder(rc, hc) << endl; }
void Output_cylinder_total_surface_area(float rc, float hc) { cout << "Total surface area of the cylinder sp=" << TotalSurfaceArea_cylinder(rc, hc) << endl; }
void Output_cylinder_volume(float rc, float hc) { cout << "Volume of the cylinder v=" << Volume_cylinder(rc, hc) << endl; }
void Input_radius(float& rc) { cin >> rc; }
void Input_height(float& hc) { cin >> hc; }

// Output functions for cone
void Output_cone_radius() { cout << "\nEnter the radius of the cone base: "; }
void Output_cone_height() { cout << "\nEnter the height of the cone: "; }
void Output_cone_slant_height() { cout << "\nEnter the length of the lateral side of the cone: "; }
void Output_cone_lateral_surface_area(float rc, float lc) { cout << "\nLateral surface area of the cone sb=" << SurfaceArea_cone(rc, lc) << endl; }
void Output_cone_total_surface_area(float rc, float lc) { cout << "Total surface area of the cone sp=" << TotalSurfaceArea_cone(rc, lc) << endl; }
void Output_cone_volume(float hc, float rc) { cout << "Volume of the cone v=" << Volume_cone(hc, rc) << endl; }
void Input_slant_height(float& lc) { cin >> lc; }

// Output functions for rectangular parallelepiped
void Output_parallelepiped_sides() { cout << "\nEnter the sides of the rectangular parallelepiped (separated by spaces): "; }
void Input_sides(float& ac, float& bc, float& cc) { cin >> ac >> bc >> cc; }
void Output_parallelepiped_total_surface_area(float ac, float bc, float cc) { cout << "\nTotal surface area of the rectangular parallelepiped sp=" << TotalSurfaceArea_parallelepiped(ac, bc, cc) << endl; }
void Output_parallelepiped_volume(float ac, float bc, float cc) { cout << "\nVolume of the rectangular parallelepiped v=" << Volume_parallelepiped(ac, bc, cc) << endl; }

// Function to handle multiple shapes and calculations
void multiple(char& ic, float& rc, float& hc, float& lc, float& ac, float& bc, float& cc, int& choice_c)
{
	while (true)
	{
		cout << "Enter '!', to end the execution or any other symbol to continue: ";
		cin >> ic;
		if (ic == '!') break;
		else
		{
			cout << "Choose a geometric figure: 1 - cylinder, 2 - cone, 3 - rectangular parallelepiped: ";
			cin >> choice_c;
			switch (choice_c)
			{
			case 1:
			{
				Output_cylinder_radius();
				Input_radius(rc);
				Output_cylinder_height();
				Input_height(hc);
				Output_cylinder_lateral_surface_area(rc, hc);
				Output_cylinder_total_surface_area(rc, hc);
				Output_cylinder_volume(rc, hc); break;
			}
			case 2:
			{
				Output_cone_radius();
				Input_radius(rc);
				Output_cone_height();
				Input_height(hc);
				Output_cone_slant_height();
				Input_slant_height(lc);
				Output_cone_lateral_surface_area(rc, lc);
				Output_cone_total_surface_area(rc, lc);
				Output_cone_volume(hc, rc); break;
			}
			case 3:
			{
				Output_parallelepiped_sides();
				Input_sides(ac, bc, cc);
				Output_parallelepiped_total_surface_area(ac, bc, cc);
				Output_parallelepiped_volume(ac, bc, cc); break;
			}
			default: cout << "Invalid figure number" << endl;
			}
		}
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float r, h, l, a, b, c;
	char i;
	int choice;
	multiple(i, r, h, l, a, b, c, choice);
	return 0;
}

// Function definitions for cylinder
float SurfaceArea_cylinder(float rc, float hc) { return 2 * pi * rc * hc; }
float TotalSurfaceArea_cylinder(float rc, float hc) { return SurfaceArea_cylinder(rc, hc) + 2 * pi * rc * rc; }
float Volume_cylinder(float rc, float hc) { return pi * rc * rc * hc; }

// Function definitions for cone
float SurfaceArea_cone(float rc, float lc) { return pi * rc * lc; }
float TotalSurfaceArea_cone(float rc, float lc) { return SurfaceArea_cone(rc, lc) + pi * rc * rc; }
float Volume_cone(float hc, float rc) { return (pi * rc * rc * hc) / 3; }

// Function definitions for rectangular parallelepiped
float TotalSurfaceArea_parallelepiped(float ac, float bc, float cc) { return 2 * ((ac * bc) + (ac * cc) + (bc * cc)); }
float Volume_parallelepiped(float ac, float bc, float cc) { return ac * bc * cc; }


//This code includes functions for calculating the surface area and volume of a cylinder, cone, 
//and rectangular parallelepiped. It uses user input to get dimensions and displays the results 
//accordingly. The code is organized into functions for clarity and ease of maintenance.