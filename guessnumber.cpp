#include <iostream>
using namespace std;

char judge_input(int num)
{
	while(true){
		cout <<"Is it a number less than "<<num<<" ?(y/n)";
		char yorn1;
		cin  >>yorn1;
		if (yorn1 == 'y' || yorn1 == 'Y')
			return 'y';
		else if (yorn1 == 'n' || yorn1 == 'N')
			return 'n';
		else 
			cout <<"please enter (y/n)";
	}
}
int main()
{
	int head=1, tail=100;
	cout <<"Please enter a number in range(1-100):";
	int init;
	cin >>init;
	cout <<"answer my questions,let me guess it...\n";
	
	int guess_tag=50;
	while(guess_tag != init)
	{
		if (judge_input(guess_tag) == 'y')
		{
			tail = guess_tag;
		}
		else
		{
			head = guess_tag;
		}
		guess_tag = (head + tail)/2;
	}
	cout <<"is it "<<guess_tag<<" ?"
		 <<"\n I get you!\n";
}
