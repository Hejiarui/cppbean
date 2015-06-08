#include "std_lib_facilities.h"

void fibolacci(int x, int y, vector<int> & v, int n)
{
	v.push_back(x);
	v.push_back(y);
	for (int i=2; i>=2; ++i)
	{
		int a =v[i-2] + v[i-1];
		if (a > v[i-1])
			v.push_back(a);
		else
			break;
	}
}

void print(string s, const vector<int>& array)
{
    for (int i=0; i<array.size(); ++i)
    {
        cout <<s<<" "<< array[i]<<"\n";
    }
}

int main()
{
	string str = "fibo ";
	vector<int> my_arr;
	fibolacci(1,1,my_arr,9);
	print(str, my_arr);
}
