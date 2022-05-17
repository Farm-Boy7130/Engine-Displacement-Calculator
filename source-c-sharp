
const double pi = Math.PI;

Console.WriteLine("Engine Displacement Calculator; Please enter the Bore of your engine.");
double Bore = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("Your bore is " + Bore + ", Correct? y/n"); // Bore Size Verification
char UserInput1 = Convert.ToChar(Console.ReadLine());

if (UserInput1 == 'n') {
    Console.WriteLine("Type a new Bore value: "); // New Bore Size Value.
    Bore = Convert.ToDouble(Console.ReadLine());
    UserInput1 = 'y';
};

Console.WriteLine("Please enter the Stroke of your engine.");
double Stroke = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("Your stroke is " + Stroke + ", Correct? y/n"); // Stroke Size Verification
char UserInput2 = Convert.ToChar(Console.ReadLine());

if (UserInput2 == 'n') {
    Console.WriteLine("Type a new Stroke value: "); // New Stroke Size Value.
    Stroke = Convert.ToDouble(Console.ReadLine());
    UserInput2 = 'y';
};

Console.WriteLine("Please enter your cylinder count.");
Double Cylinder_Count = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("Your cylinder count is " + Cylinder_Count + ", Correct? y/n"); // Cylinder Count Verification
char UserInput3 = Convert.ToChar(Console.ReadLine());

if (UserInput3 == 'n') {
    Console.WriteLine("Type a new Cylinder Count: "); // New Cylinder Count Value
    Cylinder_Count = Convert.ToDouble(Console.ReadLine());
    UserInput3 = 'y';
};

double CI_Displacement = pi * Bore / 2 * Bore / 2 * Stroke * Cylinder_Count; // Maths
double Liters_Displacement = CI_Displacement / 61.024; // Maths

Console.WriteLine(CI_Displacement + " Cubic Inch(es)");  // Output of Displacement in Cubic Inch(es)
Console.WriteLine(Liters_Displacement + " Liter(s)");  // Output of Displacement in Liter(s)

Console.ReadLine();
