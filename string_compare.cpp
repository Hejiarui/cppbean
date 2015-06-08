#include <iostream>
using namespace std;

int main()
{
	string name1;
	string name2;
	cout <<"Please Enter two names: ";
	cin >>name1>>name2;
	if (name1 == name2)
		cout <<name1<<" and "<<name2<<"are the same";
	else if (name1 < name2)
		cout <<name1<<" is alphaly smaller than "<<name2;
	else if (name1 > name2)
		cout <<name1<<" is alphaly biger than "<<name2;
	return 0;
}
