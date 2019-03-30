/*
MonkeyBusiness.cpp
Zachary Elmore
6/18/16
Enter how much each monkey ate each day of the week and get the average , max, and min of food eaten during the week
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MONKEYS = 3; //Constant integer for 3 monkeys
const int DAYS = 7; //Constant integer for the 7 days of the week

int main()
{
	int food[MONKEYS][DAYS];//2-D array for the food being eaten
	int max = 0;
	int min = 0;
	float total = 0.0;
	float average = 0.0;

	cout << "Enter how much food each monkey ate for each day of the week.\n\n" << endl;

	for (int monkey = 0; monkey < MONKEYS; monkey++) //For-loop to find the total amount of food that was eaten
	{
		for (int day = 0; day < DAYS; day++)
		{
			cout << "Monkey " << (monkey + 1) << ", day " << (day + 1) << ": ";
			cin >> food[monkey][day];

			total += food[monkey][day];
		}
	}

	average = (total / (MONKEYS * DAYS)); //Equation to find the average amount of food eaten by the 3 monkeys in a week

	for (int monkey = 0; monkey < MONKEYS; monkey++) //For-loop to find the maximum amount of food that was eaten during the week
	{
		for (int day = 0; day < DAYS; day++)
		{
			if (food[monkey][day] > max)
				max = food[monkey][day];
		}
	}

	min = max; //Assigns the minimum to the maximum
	for (int monkey = 0; monkey < MONKEYS; monkey++) //For-loop to find the minimum amount of food that was eaten during the week
	{
		for (int day = 0; day < DAYS; day++)
		{
			if (food[monkey][day] < min)
				min = food[monkey][day];
		}
	}

	//Report output for the average, min, and max 
	cout << "\n\nREPORT:" << endl;
	cout << "Average amount of food eaten: " << average << endl;
	cout << "Maximum food eaten was: " << max << endl;
	cout << "Minimum food eaten was: " << min << endl;

	cin.ignore();
	cin.get();
	return 0;
}
