#include "std_lib_facilities.h"
#include <limits.h>

int randint_t(int m, int n)
{
	int max= n;
	int min= m;
	int dis= 0;
	int pos= 0;
	srand((int)time(NULL));
	if (m == n)
		return m;
	dis = m-n;
	pos = m;
	return rand()%dis + pos	;
}
int main()
{
	int rand_i;
	for (int i=0; i<10; ++i)
	{
		rand_i = randint_t(5,9);
		cout <<"random inter: "<<rand_i<<"\n";
	}
}
