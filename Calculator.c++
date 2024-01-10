#include<iostream>
using namespace std;

int main()
{
	double a,b;
	char op;
	
	cout <<"enter the operator (+ - * /):";
	cin >> op;
	
	cout << "enter two numbers:";
	cin >> a >> b;
	
	switch (op)
	{
		case '+':
			cout << a << "+" << b << "=" << a+b ;
			break;
			case '-':
				cout << a << "-" << b << "=" << a-b ;
				break;
				case '*':
					cout << a << "*" << b << "=" << a*b ;
					break;
					case '/':
						if (b !=0)
						{
							cout << a << "/" << b << "=" << a/b;
						}
						else
						{
							cout << "error: division by zero is not allowed";
						}
						break;
						default:
						
						cout << "error: invalid operator" ;
	}
	
	
}
