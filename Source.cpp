#include <iostream>

using namespace std;

/*Written in less than an hour, no Gui involved though.*/

int main() 
{

	char UserInput1; // Bore Size Verification
	char UserInput2; // Stroke Size Verificatrion
	char UserInput3; // Cylinder Count Verification

	double Bore; // Cylinder Bore
	double Stroke; // Cylinder Stroke
	int Cylinder_Count; // Cylinder Count
	const double pi = 3.1415; // The number Pi

	cout << "Engine Displacement Calculator; Please enter the Bore of your engine." << endl;
	cout << "Bore: ";
	cin >> Bore;
	cout << "Your bore is " << Bore << ", Correct? y/n" << endl;
	cin >> UserInput1;

	if (UserInput1 == 'n') {
		cout << "Type a new Bore value: ";
		cin >> Bore;
		UserInput1 = 'y';
	};

	while (UserInput1 == 'n') {
		_mm_pause;
	}

	cout << "Please enter the Stroke of your engine." << endl;
	cout << "Stroke: ";
	cin >> Stroke;
	cout << "Your stroke is " << Stroke << ", Correct? y/n" << endl;
	cin >> UserInput2;

	if (UserInput2 == 'n') {
		cout << "Type a new Stroke value: ";
		cin >> Stroke;
		UserInput2 = 'y';
	};

	while (UserInput2 == 'n') {
		_mm_pause;
	}

	cout << "Please enter your cylinder count." << endl;
	cin >> Cylinder_Count;
	cout << "Your cylinder count is " << Cylinder_Count << ", Correct? y/n" << endl;
	cin >> UserInput3;

	if (UserInput3 == 'n') {
		cout << "Type a new Cylinder Count value: ";
		cin >> Cylinder_Count;
		UserInput3 = 'y';
	};

	while (UserInput3 == 'n') {
		_mm_pause;
	}

	double CI_Displacement = pi * Bore / 2 * Bore / 2 * Stroke * Cylinder_Count; // Maths
	double Liters_Displacement = CI_Displacement / 61.024; // Maths

	cout << CI_Displacement << " Cubic Inch(es)" << endl; // Output of Displacement in Cubic Inch(es)
	cout << Liters_Displacement << " Liter(s)" << endl; // Output of Displacement in Liter(s)

}
