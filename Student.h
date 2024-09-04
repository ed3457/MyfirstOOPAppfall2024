#pragma once
#include "string"
using namespace std; 
class Student
{
private: // data  
	string id;
	string major;
	string name; 

public: // functions 
	// setters and getters 
	void setID(string i);
	string getID();

	void setMajor(string m);
	string getMajor(); 

	void setName(string n);
	string getName();

	void printStudentInfo();

};

