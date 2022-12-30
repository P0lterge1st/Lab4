#include <iostream>
using namespace std;


/**	
 * \brief Return value that be a sum, subtraction, multiplication or division
 * 
 * \param firstV First value
 * \param secondV Second value
 * \param oper Symbol of operation
 */
double operation(double firstV, double secondV, char oper)
{
	char n;
	switch (oper)
	{
	case '+':
		cout << firstV + secondV << endl;
		return firstV + secondV;
		cin >> n;
		break;
	case '-':
		cout << firstV - secondV << endl;
		return firstV - secondV;
		cin >> n;
		break;
	case '*':
		cout << firstV * secondV << endl;
		return firstV * secondV;
		cin >> n;
		break;
	case '/':
		if (secondV == 0)
		{
			cout << "Error!";
			return 0;
			cin >> n;
			break;
		}
		else
		{
			cout << firstV / secondV << endl;
			return firstV / secondV;
			cin >> n;
			break;
		}
	default:
		cout << "Error!";
		return 0;
		cin >> n;
		break;
	}
	system("cls");
}









void main()
{
	setlocale(LC_ALL, "rus");
	double firstValue, secondValue;
	char oper,n;
	string ask;

	while (true)
	{
		cout << "Please, enter operation" << endl;
		cin >> firstValue >> oper >> secondValue;
		cout << "=\n";
		
		operation(firstValue, secondValue, oper);

		cout << "Do you what to continue?" << endl;
		cin >> ask;
		if (ask == "No" || ask == "no")
			break;
	}
}

