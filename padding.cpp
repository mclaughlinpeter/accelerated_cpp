#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string name;
	cout << "Please enter your first name: ";
	cin >> name;

	const string greeting = "Hello, " + name + "!";

	int pad_hor = 0;
	cout << "Please enter the horizontal padding: ";
	cin >> pad_hor;

	int pad_ver = 0;
	cout << "Please enter the vertical padding: ";
	cin >> pad_ver;

	const int rows = pad_ver * 2 + 3;
	const string::size_type cols = greeting.size() + pad_hor * 2 + 2;

	cout << endl;

	for (int r = 0; r != rows; r++)
	{
		string::size_type c = 0;

		while (c != cols)
		{
			if (r == pad_ver + 1 && c == pad_hor + 1)
			{
				cout << greeting;
				c += greeting.size();
			}
			else
			{
				if (r == 0 || r == rows - 1 || c == 0 || c == cols -1)
					cout << "*";
				else
					cout << " ";
				c++;
			}
		}
		cout << endl;
	}

	return 0;
}
