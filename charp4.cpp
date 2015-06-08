#include <iostream>
using namespace std;

int main()
{
	double first, second;
	double small, big;
	double taga = 1.0/100;
	cout <<"input two:";
	while(cin >>first>>second){
		if (first == second)
			cout <<"the nubers are equal\n"	;
		if (first > second){
			small = second;
			big   = first;
		}
		else if (first < second){
			small = first;
			big   = second;
		}
		if (big - small < taga)
			cout <<"the numbers are almost equal\n";
		cout <<"the smaller value is"<<small<<"\n";
		cout <<"the bigger value is"<<big<<"\n";
	}
	return 0;
	
}
