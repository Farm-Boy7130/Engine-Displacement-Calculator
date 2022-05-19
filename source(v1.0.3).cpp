// V1.03 Aplha Release - Do Not Edit unless you have C++ Experience or can easily replace any broken blocks of code. This is an Open-Sourced program.

#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main() 
{
	system("Color 0C"); // Color

	int Measurement_System;

	char UserInput1; // Bore Size Verification
	char UserInput2; // Stroke Size Verificatrion
	char UserInput3; // Cylinder Count Verification
	char UserInput4; // Metric/Imperial System Verification
	char UserInput5; // Metric/Imperial System End Un-Defined Re-Definition

	double Bore; // Cylinder Bore
	double Stroke; // Cylinder Stroke
	int Cylinder_Count; // Cylinder Count
	const double pi = 3.1415; // The number Pi

	cout << "Engine Displacement Calculator v1.03 Release; Please keep in mind this program is in Aplha Release." << endl << "Please enter your Measurement System of choice." << endl; // First Message
	cout << "1: Imperial system" << endl;
	cout << "2: Metric System" << endl;
	cout << "Measurement System: ";
	cin >> Measurement_System; // Measurement System of User's Choice.

	if ((Measurement_System != 1) && (Measurement_System != 2)) {
		cout << "Please enter a valid Measurement system from the aforementioned key." << endl;
		cout << "Please enter your Measurement System of choice." << endl;
		cout << "Measurement System: ";
		cin >> Measurement_System;
	};

	string Measurement_System1;

	if (Measurement_System == 1) {
		Measurement_System1 = "Imperial System";
	};
	if (Measurement_System == 2) {
		Measurement_System1 = "Metric System";
	};

	if ((Measurement_System == 1) || (Measurement_System == 2)) {
		cout << "Your Measurement System is the " << Measurement_System1 << ", Correct? y/n" << endl;
		cin >> UserInput4;
	};
/*
	if ((UserInput4 != 'y') && (UserInput4 != 'n') && (UserInput4 != '-')) {
		cout << "Please respond with y/n." << endl;
		cin >> UserInput4;
	};
*/

	if (UserInput4 == 'n') {
		cout << "Type a new Measurement System guided by the aforementioned Chart." << endl;
		cin >> Measurement_System;
		UserInput4 = 'y';
	};

	while (UserInput4 == 'n') {
		_mm_pause;
	}

	if ((Measurement_System != 1) && (Measurement_System != 2)) {
		cout << "Please enter a valid Measurement system from the aforementioned key." << endl;
		cout << "Please enter your Measurement System of choice." << endl;
		cout << "Measurement System: ";
		cin >> Measurement_System;
	};

	if ((Measurement_System != 1) && (Measurement_System != 2) && not (Measurement_System == '-')) {
		cout << "Your Measurement System is Blank. Continuing with the program." << endl;
		Measurement_System = '-';
	};

	cout << "Please enter the Bore of your engine." << endl;
	cout << "Bore: ";
	cin >> Bore; // Bore Input
	cout << "Your bore is " << Bore << ", Correct? y/n" << endl; // Bore Verification
	cin >> UserInput1;

	if (UserInput1 == 'n') {
		cout << "Type a new Bore value: "; // Bore re-input
		cin >> Bore;
		UserInput1 = 'y'; // Resetting UserInput1
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

	if ((Measurement_System != 1) && (Measurement_System != 2)) {
		cout << "Measurement System not defined previously, Would you like to define it now? y/n" << endl;
		cin >> UserInput5;
		if (UserInput5 == 'y') {
			cout << "Please enter a valid Measurement system from the aforementioned key." << endl;
			cin >> Measurement_System;
		};
	};

	if (Measurement_System == 1) {

		double CI_Displacement = pi * Bore / 2 * Bore / 2 * Stroke * Cylinder_Count; // Maths
		double Liters_Displacement = CI_Displacement / 61.024; // Maths

		cout << CI_Displacement << "; Cubic Inch(es)" << endl; // Output of Displacement in Cubic Inch(es)
		cout << Liters_Displacement << "; Liter(s)" << endl; // Output of Displacement in Liter(s)
		cout << "Created by Farm-Boy_7130 | 5/16/22 11:48 PM. Copyright 2022" << endl;

		char ignore;
		cin >> ignore;

	};

	if (Measurement_System == 2) {

		double CC_Displacement = ((0.7854 * Bore * Bore) * Stroke * Cylinder_Count) / 1000; // Maths
		double CM_Displacement = CC_Displacement / 1000000; // Maths

		//I don't think that Cubic Meters is such a good idea. I think I'll stick to doing just CC for now. Metric system support is a monster.

		cout << CC_Displacement << "; Cubic Centimeter(s)" << endl; // Output of Displacement in Cubic Centimeter(s)
		cout << CM_Displacement << "; Cubic Meter(s)" << endl; // Output of Displacement in Cubic Meter(s)
		cout << "Created by Farm-Boy_7130 | 5/16/22 11:48 PM. Copyright 2022" << endl;

		char ignore;
		cin >> ignore;

	};

/*
	char Save;
	cout << "Do you want to save your results? y/n" << endl;
	cin >> Save;

	if (Save == 'y') {
		fstream Result("Result.txt");
		Result << CI_Displacement << Liters_Displacement;
		Result.close();
	};
*/

}
