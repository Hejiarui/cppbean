#include <iostream>
using namespace std;

int main()
{
	double sum=0;
	double curent=1;
	for (double i=0; i<64; ++i)
	{
		if(i==0)
			curent = 1;
		else
			curent *= 2;
		sum += curent;
		cout <<"current in NO."<<i+1<<"block\n"
			 <<"This block has "<<curent<<"rices\n"
			 <<"Sum has "<<sum<<"rices in all\n"
			<<"----------------------------------\n";
	}
}
