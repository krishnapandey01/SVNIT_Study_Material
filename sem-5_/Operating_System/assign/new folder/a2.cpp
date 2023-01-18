
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n, m, i, j, k;
	// n = 5
	cout << "enter the Number of processes and resources: ";
	cin >> n >> m;
	// m = 3
	int alloc[n][m], max[n][m];

	cout << "enter the allocation matrix";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> alloc[i][j];
	}
	cout << "enter the max matrix";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> max[i][j];
	}

	// int avail[3] = {3, 3, 2}; // Available Resources
	int avail[m];
	cout << "Number of available Resources";
	for (int i = 0; i < m; i++)
	{
		cin >> avail[i];
	}

	int f[n], ans[n], ind = 0;
	for (k = 0; k < n; k++)
	{
		f[k] = 0;
	}
	int need[n][m];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			need[i][j] = max[i][j] - alloc[i][j];
	}
	int y = 0;
	for (k = 0; k < n; k++)
	{
		for (i = 0; i < n; i++)
		{
			if (f[i] == 0)
			{

				int flag = 0;
				for (j = 0; j < m; j++)
				{
					if (need[i][j] > avail[j])
					{
						flag = 1;
						break;
					}
				}

				if (flag == 0)
				{
					ans[ind++] = i;
					for (y = 0; y < m; y++)
						avail[y] += alloc[i][y];
					f[i] = 1;
				}
			}
		}
	}

	int flag = 1;

	// To check if sequence is safe or not
	for (int i = 0; i < n; i++)
	{
		if (f[i] == 0)
		{
			flag = 0;
			cout << "Deadlock occurs";
			break;
		}
	}

	if (flag == 1)
	{
		cout << "Deadlock will not occur and process sequence will be Sequence" << endl;
		for (i = 0; i < n - 1; i++)
			cout << " P" << ans[i] << " ->";
		cout << " P" << ans[n - 1] << endl;
	}

	return 0;
}

/*
0 1 0
2 0 0
3 0 2
2 1 1
0 0 2

7, 5, 3
3 2 2
9 0 2
2 2 2
4 3 3
*/