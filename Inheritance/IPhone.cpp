#include "IPhone.h"

IPhone::IPhone() {
	cout << "IPhone constructor" << endl;
}

IPhone::~IPhone() {
	cout << "IPhone destructor" << endl;
}

void IPhone::call(int mobileNo) {
	Mobile::call(mobileNo);
	cout << "Iphone call function" << endl;
}
