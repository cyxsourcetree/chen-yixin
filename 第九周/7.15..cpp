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

#include<vector>

using namespace std;
int main()
{

	int numarray[3][5];
	int i, j;
	int num = 1;

	vector<vector<int>> sales(3, vector<int>(5));

	for (size_t row = 0; row < sales.size(); row++)
	{
		for (size_t column = 0; column < sales[row].size(); column++)
		{
			sales[row][column] = 0;
			numarray[row][column] = num++;
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d   ", numarray[i][j]);
		}

	}
	system("PAUSE ");
    return 0;
}
