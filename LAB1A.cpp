//--------------------------------------
//Programming Asignment: LAB1A
//Developer: Ezeniel Rios
//Date Written: 3/3/2021
//Purpose: Ticket Calculation Program
//--------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	cout << "Ezeniel Rios ticket program\n";

	double childTkts, adultTkts, totalTkts;
	cout << "Please enter the number of child tickets: ";
	cin >> childTkts;
	cout << "Please enter the number of adult tickets: ";
	cin >> adultTkts;
	totalTkts = childTkts + adultTkts;

	cout << "The total Tickets are: " << totalTkts << endl;
	system("pause");
}
