#include <iostream>
using namespace std;


int main()
{
	cout <<"Please input your name:";
	string name_u;
	cin >>name_u;
	cout <<"Hello, "<<name_u;
	cout <<"\nEnter the name of the person you want to write to:";
	string name_targ;
	cin >>name_targ;
	cout <<"Dear "<<name_targ<<",\n\n";
	cout <<"\tHow are you? I'm fine. miss you\n";
	cout <<"Please enter name of your another friend:";
	string name_friend;
	cin  >>name_friend;
	cout <<"Have you seen "<<name_friend<<" lately?";
	char friend_sex = '0';
	cout <<"please enter the sexual of your friend male(m) famale(f):";
	cin  >>friend_sex;
	if (friend_sex == 'm')
		cout <<"if you see "<<name_friend<<" please ask him to call me\n";
	else if (friend_sex == 'f')
		cout <<"if you see "<<name_friend<<" please ask her to call me\n";
	int age;
	cout <<"please enter the age of your friend:";
	cin >>age;
	if (age >=110 || age < 0)
		error("you are kidding!");
	else 
		cout <<"I heard you just had a birthday and you are "<<age<<" years old.";
	
}
