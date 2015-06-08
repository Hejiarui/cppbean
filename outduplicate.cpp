#include <iostream>
using namespace std;

int main()
{
	int cntStr=0;
	string previous = " ";
	string str_test;
	cout <<"Please input a string:";
	while (cin>>str_test){
		++cntStr;
		if (str_test == previous)
			cout <<"it's NO."<<cntStr<<" "<<str_test<<" "<<"repeated\n";
		previous = str_test;
	}
	return 0;
}
