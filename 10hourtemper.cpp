#include "std_lib_facilities.h"


struct Pairs{
	int hour;
	double temper;
	Pairs(int hour, double temper) :hour(hour), temper(temper) {}
};

int main()
{
	cout <<"Enter the input file name: ";
	string iname;
	cin >>iname;
	ifstream ist(iname.c_str());
	if(!ist) error("not a ivalid input file name: ",iname);
	
	int hour;
	double temper;
	vector<Pairs> tmph;
	while(ist>>hour>>temper){
		cout <<hour<<"	"<<temper<<"\n";
		tmph.push_back(Pairs(hour, temper));
	}


	cout<<"please enter the name of output file: ";
	string oname;
	cin>>oname;
	ofstream ost(oname.c_str());
	for (int i=0; i<tmph.size(); ++i)
	{
		cout<<"Write to "<<oname<<"		"<<tmph[i].hour<<"	"<<tmph[i].temper<<"\n";
		ost<<tmph[i].hour<<"		"<<tmph[i].temper<<"\n";
	}
}
