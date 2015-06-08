#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<double>s;
	double first;
	double small, large;
	double sum = 0;
	
	string second;
	string unit = "m";
	int i=0;
	cout <<"please enter one num with unit(cm/in/ft/m):";
	while(cin>>first>>second){
		//set all unit to 'm'
		if (second == "cm")
			first *= 0.01;
		else if(second == "in")
			first *= 2.54*0.01;
		else if(second == "ft")
			first *= 12*2.54*0.01;
		sum += first;
		s.push_back(first);
		//log current smallest and largest
		if (i==0) {
			small = first;
			large = first;
		}
		if (first < small)	
			small = first;
		else if (first > large)
			large = first;
		++i;
		
		cout <<"the smallest so far is "<<small<<unit<<"\n"
			<<"the largest so far is "<<large<<unit<<"\n"
			<<"total number is "<<i<<"\n"
			<<"the sum is "<<sum<<unit<<"\n"
			<<"\n";
		sort(s.begin(), s.end());
		cout <<"all the element loged: ";
		for (int j=0; j<s.size(); ++j)
			cout <<s[j]<<"  ";
		cout <<"\n";
	}
}
