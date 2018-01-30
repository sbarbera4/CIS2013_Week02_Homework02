#include <iostream>
using namespace std;

int main() 
{
float num1;
float num2;
char op;

cout << "Enter first number: " << endl;
cin >> num1;
cout << "Enter either +, -, *, or /" << endl;
cin >> op;
cout << "Enter second number: " << endl;
cin >> num2;


 switch(op)
    {
	case '+':
		cout << num1 << " " << op << " " << num2 << " = ";
        cout << num1+num2;
		cout << " " << endl;
        break;

    case '-':
		cout << num1 << " " << op << " " << num2 << " = ";
        cout << num1-num2;
		cout << " " << endl;
        break;

    case '*':
		cout << num1 << " " << op << " " << num2 << " = ";
        cout << num1*num2;
		cout << " " << endl;
        break;

    case '/':
		cout << num1 << " " << op << " " << num2 << " = ";
        cout << num1/num2;
		cout << " " << endl;
        break;

    default:
        cout << "Whoops! Looks like you broke something!";
		cout << " " << endl;
        break;
    }

	return 0;
} 