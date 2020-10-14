#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{

	float a, b, c;

	cout << "Please write your values: " << endl;
first:
	cout << "Value a: " << endl;
	cin >> a;
	if (a == 0) {
		cout << "It's not quadratic equation! Please set your value one more time except 0." << endl;
		goto first;
	}
	cout << "Value b: " << endl;
	cin >> b;
	cout << "Value c: " << endl;
	cin >> c;


	cout << "Here are your values, a: " << a << ", b: " << b << " ,c: " << c << endl;

	float delta = (b * b) - 4 * a * c;

	cout << "Your delta is: " << delta << endl;

	float rootDelta = sqrt(delta);

	if (delta < 0)
	{
		cout << "There is no roots of your quadratic equation." << endl;
	}
	else if (delta == 0)
	{
		cout << "Root of delta is: " << rootDelta << endl;
		float rootZero = b / (2 * a);
		cout << "The root of your quadratic equation is: " << rootZero << endl;
	}
	else
	{
		cout << "Root of delta is: " << rootDelta << endl;
		float rootOne = (-b - rootDelta) / (2 * a);
		float rootTwo = (-b + rootDelta) / (2 * a);
		cout << "There are two roots of your quadratic equation: " << rootOne << ", " << rootTwo << endl;
	}


	system("PAUSE");
	return 0;
}

