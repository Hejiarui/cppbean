#include "std_lib_facilities.h"

void get_age(const vector<string> & name, vector<double> & age)
{
	cout <<"--------------------------------------------------"<<"\n";
	for(int i=0; i<name.size(); ++i)
	{
		double agetmp;
		cout <<"Set age of person "<<name[i]<<" :";
		cin >>agetmp;
		age.push_back(agetmp);
	}
}

void print(const vector<string> & name, const vector<double> & age)
{
	cout <<"--------------------------------------------------"<<"\n";
	for (int i=0; i<name.size(); ++i)
	{
		cout<<"person:"<<name[i]<<"    "<<"age:"<<age[i]<<"\n";
	}
}

void sort_name(vector<string> & name, vector<double> & age)
{
	vector<string> bakStrName(name);
	sort(name.begin(), name.end());
	vector<double> newAge;
	for (int i=0; i<name.size(); ++i)
	{
		for (int j=0; j<bakStrName.size(); ++j)
		{
			if(name[i] == bakStrName[j])
			{
				newAge.push_back(age[j]);
			}
		}
	}
	age = newAge;
}


int main()
{
	vector<string> name;
	vector<double> age;

	string strName;
	cout<<"Please enter name of person, input \";\" to end:";
	while(cin>>strName){
		if (strName == ";") break;
		name.push_back(strName);
	}

	get_age(name,age);
	print(name,age);
	sort_name(name,age);
	print(name,age);
}
