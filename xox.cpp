#include <iostream>
#include <vector>
#include <time.h>
#include <random>
using namespace std;


int computs()
{
	int i;
	srand((unsigned)time(NULL));
	i << rand() % 3;
	return i;
}
char judgewin(string comput, char user)
{
	char winner;
	switch(user){
		case 's':
			if (comput == "stone")
				winner = 'B';
			else if (comput == "scissor")
				winner = 'Y';
			else if (comput == "mabu")
				winner = 'C';
		break;
		case 'x':
			if (comput == "stone")
				winner = 'C';
			else if (comput == "scissor")
				winner = 'B';
			else if (comput == "mabu")
				winner = 'Y';
		break;
		case 'm':
			if (comput == "stone")
				winner = 'Y';
			else if (comput == "scissor")
				winner = 'C';
			else if (comput == "mabu")
				winner = 'B';
		break;
	}
	return winner;
}

int main()
{

	vector<string>s(2);
	s[0] = "stone";
	s[1] = "scissor";
	s[2] = "mabu";

	char users;
	string win = "";
	
	while(true)
	{
		int tmp = computs();
		cout <<"Enter yours Stone(s) Scissor(x) Mabu(m):";
		cin>>users;
		switch (judgewin(s[tmp], users))
		{
			case 'Y':
				win = "YOU";break;
			case 'C':
				win = "COMPUTER";break;
			case 'B':
				win = "B";break;
		}		
		if (win == "B")
			cout <<"We are the same!play again?";
		else
			cout <<"Computer show a "<<s[tmp]<<" So"<<win<<" WIN! ";
	}

	return 0;
}
