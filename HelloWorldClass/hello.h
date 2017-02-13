#include <iostream>
#include <string>
using namespace std;

class Hello {
private:
	string name;
public:
	Hello(); //Default Constructor declaration
	Hello(string name); //Overloaded Constructor declaration
	~Hello();//Destructor declaration
	void publicMethod();
};
