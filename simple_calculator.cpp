// C++ program to create calculator
// switch statement
#include <iostream>
using namespace std;

int main()
{
	char assignment_operator;
	float num1, num2;

	// It allows  to enter operator
	// i.e. +, -, *, /
	cout<<"print assignment operator:=";
	cin >> assignment_operator;

	// It allow to enter the operands
	cout<<"enter first number:=";
	cin >> num1;
	cout<<"enter second number:=";
	cin>>num2;


	// Switch statement begins
	switch (assignment_operator)
	{	
		// If user enter +
		case  '+':
			cout << num1 + num2;
			break;
		
		// If user enter -
		case '-':
			cout << num1 - num2;
			break;
		
		// If user enter *
		case '*':
			cout << num1 * num2;
			break;
		
		// If user enter /
		case '/':
			cout << num1 / num2;
			break;
		
		// If the operator is other than +, -, * or /,
		// error message will display
		default:
			cout << "Error! operator is not correct";
			
	}
	// switch statement ends

	return 0;
}
