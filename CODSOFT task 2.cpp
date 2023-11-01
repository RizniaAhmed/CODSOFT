#include <iostream>
using namespace std;

void main()
{
	float a;
	float b;
	char op;

	cout << "Please enter a number:" << endl;
	cin >> a;
	cout << "Please enter another number:" << endl;
	cin >> b;
	cout << "Please enter A for addition, S for subtraction, D for division and M for multiplication" << endl;
	cin >> op;
	if (op == 'A') { cout << "After addition: " << a + b; }
	if (op == 'S') { cout << "After subtraction: " << a - b; }
	if (op == 'D') { cout << "After division: " << a / b; }
	if (op == 'M') { cout << "After multiplication: " << a * b; }

}

