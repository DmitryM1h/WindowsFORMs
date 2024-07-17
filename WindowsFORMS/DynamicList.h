#pragma once
#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class List
{
	struct Node {
		Student data;
		Node* next;

		Node() { next = 0; }

		Node(Student s) {
			next = 0;
			data = s;
		}
	};

	typedef Node* TList;

	TList head;

public:
	List() {
		head = 0;
	}

	void addToHead(Student stud) {
		Node* p = new Node(stud);
		p->next = head;
		head = p;
	}

	void deleteFromHead() {
		Node* p = head;
		head = p->next;
		p->next = 0;
		delete p;
		p = 0;
	}

	void clear() {
		while (head != 0)
			deleteFromHead();
		delete head;
		head = 0;
	}

	void FillFromFile(string filename) {
		ifstream in(filename);
		if (in.is_open()) {
			Student stud;
			if (in >> stud) {
				addToHead(stud);
			}
		}
	}
};
