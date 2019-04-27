#include "stdafx.h"
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using std::cout;
using std::endl;
using namespace std;
int main()
{
	vector<int> myvector, vector;
	int size = 1;
	for (int i = 0; i < 20; i++)
	{
		int a = rand() % 61 + 40;
		vector.push_back(a);

		size = myvector.size()+1;
		for (int j = 0; j < myvector.size(); j++)
		{
			if (a == myvector[j])
			{
				size = size - 1;
			}
		}

		myvector.push_back(a);
		myvector.resize(size);
	}

	cout << "处理前的数组:";
	for (int i = 0; i<vector.size(); i++)
		cout << ' ' << vector[i];
	cout << '\n';

	cout << "\n处理后的数组:";
	for (int i = 0; i<myvector.size(); i++)
		cout << ' ' << myvector[i];
	cout << '\n';

	system("PAUSE ");
	return 0;
}
