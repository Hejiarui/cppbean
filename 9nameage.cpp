#include "std_lib_facilities.h"

class Name_pairs{
public:
	void read_names();
	void read_ages();
	void sort_name();
	void print();
	
	vector<string>  get_name() const
	{
		return name;
	}
	vector<double>  get_age() const
	{
		return age;
	}
private:
	vector<string> name;
	vector<double> age;
};

bool operator==(const Name_pairs& a, const Name_pairs& b)
{
	bool tag=true;
	for(int i=0; i<a.get_name().size(); ++i)
	{
		if(a.get_name()[i] != b.get_name()[i] || a.get_age()[i]!=b.get_age()[i])
		tag=false;
		return tag;
	}
}
bool operator!=(const Name_pairs& a, const Name_pairs& b)
{
	return !(a==b);
}

void operator<<(ostream& os,Name_pairs& a)
{
	a.print();
}

void Name_pairs::read_names()
{
	string strName;
	
	cout <<"Please enter names, end input with \";\" : \n";
	while(cin >>strName){
		if (strName == ";")
			break;
		else
			name.push_back(strName);
	}
}

void Name_pairs::read_ages()
{
	double dage;
	cout <<"----------------------------------- \n";
	for (int i=0; i<name.size(); ++i)
	{
		cout<<"set age for "<<name[i]<<" :";
		cin>>dage;
		age.push_back(dage);
	}
}
void Name_pairs::print()
{
	cout <<"----------------------------------- \n";
	for (int i=0; i<name.size(); ++i)
		cout<<"person :"<<name[i]<<"  age :"<<age[i]<<"\n";
}

void Name_pairs::sort_name()
{
	vector<string>bakName(name);
	vector<double>newAge;
	sort(name.begin(), name.end());
	for (int i=0; i<name.size(); ++i)
	{
		for (int j=0; j<bakName.size(); ++j)
		{
			if(bakName[j] == name[i])	
				newAge.push_back(age[j]);
		}
	}
	age = newAge;
}

int main()
{
	Name_pairs X;
	X.read_names();
	X.read_ages();
	cout <<X;
	X.sort_name();
	cout << "after person been sorted---\n";
	cout <<X;

	cout <<"ANOTHER PAIR!!!!\n";
	Name_pairs Y;
	Y.read_names();
	Y.read_ages();
	cout <<Y;
	Y.sort_name();
	cout << "after person been sorted---\n";
	cout <<Y;

	cout << "\njudge if these two pair equal-\n";
	if (X==Y) cout << "X and Y are equal!\n";
	if (X!=Y) cout << "X and Y are NOT equal!\n";
	
}
