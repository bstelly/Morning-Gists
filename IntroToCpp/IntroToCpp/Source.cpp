#include <iostream>

int main()
{
	int input;
	int myArray[5];
	for (int i = 0; i < 5; i++)
	{
		std::cin >> input;
		myArray[0] = i;
		myArray[0]++;
	}

	int iter;
	int largeNumber;
	int anotherLargeNumber;
	int result;
	for (int iter = myArray[0]; iter > myArray[1]; myArray[0]++)
	{
		largeNumber = iter;
	}
	for (iter = largeNumber; iter > myArray[0]; myArray[0]++)
	{
		anotherLargeNumber = iter;
	}
	largeNumber + anotherLargeNumber = result;

