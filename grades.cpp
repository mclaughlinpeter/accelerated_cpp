#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setprecision;
using std::streamsize;

int main()
{
	string name;
	cout << "Please enter your first name: ";
	cin >> name;
	cout << "Hello, " << name << "!" << endl;
	while (cin.get() != '\n');

	double midterm = 0.0;
	cout << "Enter mid-term grade: ";
	while (!(cin >> midterm) || midterm < 0.0 || midterm > 100.00)
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Re-enter mid-term grade: ";
	}
	while (cin.get() != '\n');

	double final = 0.0;
	cout << "Enter final grade: ";
	while (!(cin >> final) || final < 0.0 || final > 100.00)
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Re-enter final grade: ";
	}
	while (cin.get() != '\n');

	cout << "Mid-term: " << midterm << endl << "Final: " << final << endl;

	cout << endl << "Enter all homework grades, followed by EOF: ";
	int count = 0;
	double sum = 0.0;
	double input = 0.0;
	while (cin >> input) // not a percent
	{
		if (input >= 0.0 && input <= 100.0)
		{
			++count;
			sum =+ input;
		}
	}
	cin.clear();
	while (cin.get() != '\n');

	streamsize prec = cout.precision();
	cout << "Your final grade is: " << setprecision(3) << (0.2 * midterm) + (0.4 * final) + (count > 0 ? 0.4 * sum / count : 0) << endl;
	setprecision(prec);

	return 0;
}
