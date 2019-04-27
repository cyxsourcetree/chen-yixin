#include <iostream>
#include<stdafx.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
using std::cout;
using std::endl;

int main()
{
     int t[2][3]={1,2,3,4,5,6};
     t[1][0],t[1][1],t[1][2]
     int i,j;
     int min,sum;
     t[0][1] = 0;
	t[2][3] = { 0 };


     for
        for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			 t[i][j] = 3;

	for (auto &row : t) {
		for (auto &col : row) {
			col = 0;
		}
	}

	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			scanf_s("%d", &t[i][j]);

	min = t[0][0];
	for (auto &row : t) {
		for (auto col : row) {
			if (col < min)
			{
				min = col;
			}
		}
	}
	printf("%-3d\n", min);

	printf("\n第一行所有元素：");
	for (j = 0; j < 3; j++)
		printf("%-3d", t[0][j]);

	printf("\n第二行所有元素：");
	for (j = 0; j < 3; j++)
		printf("%-3d", t[1][j]);
	printf("\n");

	sum = 0;
	for (i = 0; i < 2; i++)
		sum =sum + t[i][1];
	printf("%-3d", sum);

	printf("%s", "   ");
	for (j = 0; j < 3; ) printf("%-3d", ++j);
	for (i = 0; i < 2; i++)
	{
		printf("\n%-3d", i + 1);
		for (j = 0; j < 3; j++)
		{
			printf("%-3d", t[i][j]);
		}

	}

	system("PAUSE ");
	return 0;
}


