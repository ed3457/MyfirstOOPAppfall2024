#include "Student.h"
#include <iostream>
using namespace std; 
void Student::setID(string i)
{
	id = i;

}

string Student::getID()
{
	return id;
}

void Student::setMajor(string m)
{
	major = m;
}

string Student::getMajor()
{
	return major;
}

void Student::setName(string n)
{
	name = n;
}

string Student::getName()
{
	return name;
}

void Student::printStudentInfo()
{
	cout << "Student ID:" << id << endl;
	cout << "Student Name:" << name << endl;
	cout << "Student Major:" << major << endl;
}