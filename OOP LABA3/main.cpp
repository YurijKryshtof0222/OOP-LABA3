#include <iostream>
#include <iomanip>
#include <sstream>
#include "Rectangle.h"

using namespace std;

int main()
{

	cout << setw(50) << "Rectangle obj demo" << endl;
	Rectangle<int> rec1(4, 5);
	rec1.printInfo();
	cout << endl;
	
	Rectangle<double> rec2(10, 3.5);
	cout << fixed << setprecision(2);
	rec2.printInfo("SecondRectangle");
	cout << endl << endl;

	cout << "Prefix increment test" << endl;
	Rectangle<long> rec3(7, 8);

	rec3.printInfo();
	cout << endl;
	(++rec3).printInfo();
	cout << " - rec prefix increment" << endl;
	rec3.printInfo();
	cout << endl << endl;
	
	cout << "Postfix increment test" << endl;
	Rectangle<long> rec4(5, 4);

	rec4.printInfo();
	cout << endl;
	(rec4++).printInfo();
	cout << " - rec postfix increment" << endl;
	rec4.printInfo();
	cout << endl;
	rec4.printInfo("FourthRectangle");
	cout << endl << endl;

	cout << "Incorrect value test" << endl;
	Rectangle<long> rec5(-1, -2);
	(rec5--).printInfo();
	cout << rec5.getArea(-34);

	cout << endl << endl;
	return 0;
}