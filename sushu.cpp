#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool is_sushu(int num)
{
	bool istag = true;
	for (int i=2; i<num; ++i)
	{
		if (num%i == 0)
		{
			istag = false;
		}
		else
		{
			continue;
		}
	}
	if (num ==1)
		return false;
	else
		return istag;
}
int main()
{
	vector<int>s;
	int intmp;
	cout <<"please enter a range n to get sushu in (1~n):";
	cin  >>intmp;
	for (int i=1; i<=intmp; ++i)
	{
		if (is_sushu(i) )
		{
			cout <<"a sushu found: "<<i<<"\n";
			s.push_back(i);
		}
		else
		{
			continue;
		}
	}
	cout <<"list all the "<<s.size()<<" sushu in range "<<intmp<<";";
	for (int j=0; j<s.size(); ++j)
		cout<<s[j]<<" ";
}

