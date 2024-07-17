#pragma once
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	string name;
	string surname;
	int* marks;
	int length;
	double averagemark;

public:
	Student() {
		length = 5;
		marks = new int[length];
		averagemark = 0;
	}

	Student(string _name, string _surname, int* arr) {
		name.reserve(21);
		surname.reserve(21);
		name = _name;
		surname = _surname;
		for (int i = 0; i < length; ++i)
			marks[i] = arr[i];
	}

	string getname() {
		return name;
	}

	string getsurname() {
		return surname;
	}

	int* getmarks() {
		return marks;
	}

	friend istream& operator>>(istream& in, Student& stud) {
		in >> stud.name >> stud.surname >> stud.marks[0] >> stud.marks[1]
			>> stud.marks[2] >> stud.marks[3] >> stud.marks[3] >> stud.marks[5];
		return in;
	}
};