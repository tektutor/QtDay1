#include "Mobile.h"

Mobile::Mobile() {
	cout << "Mobile constructor ..." 
             << endl;
}

Mobile::~Mobile() {
	cout << "Mobile destructor ..."
             << endl;
}

void Mobile::call(int mobileNo) {
	cout << "From Mobile class calling " << mobileNo << endl;
}
