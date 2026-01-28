#include "Student.hpp"
#include <iostream>
#include<string>
#include <cstddef>
using namespace std;

Student::Student()
{
	name = new string("");
	age = new int(0);
	cout << "Student object created!\n";
}
Student::~Student()
{
	delete name;
	name = nullptr;
	delete age;
	age = nullptr;
	cout << "Student object destroyed!\n";
}

void Student::setName(string s)
{
	*name = s;
}
void Student::setAge(int i)
{
	*age = i;
}
string Student::getName() const
{
	return *(name);
}
int Student::getAge() const
{
	return *(age);
}