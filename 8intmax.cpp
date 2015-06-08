#include "std_lib_facilities.h"

int main()
{
	int i=0;
	while(true)
	{
		int max_1 = i;
		i++;
		if (i - max_1 == 1)
		{
			cout <<max_1<<endl;
		}
		else
			break;
	}
}
