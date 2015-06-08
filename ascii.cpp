#include <iostream>
using namespace std;

int main()
{
	int i=0;
	while(i<26){
		char test = char('a'+i);
		int tmp = test;
		cout <<test<<"\t"<<tmp<<"\n";
		++i;
	}
	return 0;
}
