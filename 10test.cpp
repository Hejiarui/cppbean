#include "std_lib_facilities.h"

int main()
{
	cout<<"Please enter the file name: ";
	string name;
	cin >>name;
	ofstream ost(name.c_str());
	ost <<"hello,world!\n";
}
