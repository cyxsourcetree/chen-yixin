#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{

	int sum[36000] = {0};
	int a, b;
	int count = 0;

	for (size_t i = 0; i < 36000; i++)
	{
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		sum[i] = a+b;
		if (sum[i]==7)
		{
			count++;
		}
		printf("%d  %d  %d  %d\n", i,a,b, sum[i]);
	}

	printf("%d/36000",count);
	system("PAUSE ");
    return 0;
}
