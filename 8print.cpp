#include "std_lib_facilities.h"

vector<int> arr;
string str = "position is";

void print(string s, const vector<int>& array)
{
	for (int i=0; i<array.size(); ++i)
	{
		cout <<s<<" "<< array[i]<<"\n";
	}
}

int main()
{
	for (int i=0; i<5; ++i)
		arr.push_back(i);
	print(str, arr);
}
