#include <iostream>

struct Student
{
	char mName[255];
	int mAge;
};

Student CreateStudent()
{
	Student newStudent;
	std::cout << "Please input the student's name.\n";
	std::cin >> newStudent.mName;
	std::cout << "Please input the student's age.\n";
	std::cin >> newStudent.mAge;
	return newStudent;
}

int main()
{
	Student ClassRoom[7];
	for (int i = 0; i < 7; i++)
	{
		ClassRoom[i] = CreateStudent();
	}

}