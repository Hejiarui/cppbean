#include "std_lib_facilities.h"

vector<string> reverse(const vector<string> & arr)
{
	vector<string>  arr_tmp;
	for (int i=arr.size(); i>0; --i)
	{
		string temp = arr[i-1];
		arr_tmp.push_back(temp);
	}
	return arr_tmp;
}

void reve_orig(vector<string> & arr)
{
	for (int i=0; i<arr.size()/2; ++i)
	{
		swap(arr[i], arr[arr.size()-1-i]);
	}
}

void print(string s, const vector<string>& array)
{
	cout <<s<<"\n";
    for (int i=0; i<array.size(); ++i)
    {
        cout <<" "<< array[i];
    }
	cout <<"\n";
}

int main()
{
	vector<string> my_arr;
	my_arr.push_back("helo");
	my_arr.push_back("AAsdx");
	my_arr.push_back("helo");
	my_arr.push_back("GGw3a");
	my_arr.push_back("HHwsd");
	my_arr.push_back("IIoks");
	my_arr.push_back("JJsad");
	my_arr.push_back("kkeas");
	print("Original vector is: ", my_arr);
	print("New vector reversed:", reverse(my_arr));
	reve_orig(my_arr);
	print("Orig swaped vector :", my_arr);
	
}
