#include "hello.h"

//Constructor
Hello::Hello() {
	cout << "Inside constructor ..." << endl;
}

Hello::Hello(string name) {
	cout << "Overloaded constructor ..." << name << endl;
	this->name = name;
}

//Destructor 
Hello::~Hello() {
	cout << "Inside destructor ..." << name << endl;
}

