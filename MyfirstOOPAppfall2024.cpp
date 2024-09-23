// MyfirstOOPAppfall2024.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
int main()
{
    std::cout << "Hello World!\n";

    Student student1; // object 
    Student student2("5612","Jenna","Math");

    student1.setID("123");
    student1.setMajor("English");
    student1.setName("Ryan");

    //student1.printStudentInfo();

    //student2.printStudentInfo();


    Student StudentList[3];

    for (int i = 0; i < 3; i++)
        StudentList[i].printStudentInfo();


    Student* s1 = new Student();
    Student* s2 = new Student("1221", "CS", "Jason");

    s1->setID("1211221");

    (*s1).setID("122432432");

    delete s1; 

   // s1 = new Student();

    s1 = new Student[5];

   // delete[] s1; 

    for (int i = 0; i < 5; i++)
        s1[i].setID(i+"");

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
