# C_N_number_theory#include<bits/stdc++.h>
using namespace std;

void makeit(pair<bool, int> *cube)
{
	for (int i = 2; i * i * i <= 1000000; i++)
	{
		for (int j = i * i * i; j <= 1000000; j += (i * i * i))
		{
			cube[j].first = false;
			cube[j].second = 0;
		}
	}
	int c = 1;

	for (int i = 1; i <= 1000000; i++)
	{
		if (cube[i].first)
		{
			cube[i].second = c;
			c++;
		}
	}
}


int main()
{


	pair<bool, int> *cube = new pair<bool, int>[1000000 + 2];

	for (int i = 1; i <= 1000000; i++)
	{
		cube[i].first = true;
	}

	makeit(cube);


	int t;
	cin >> t;
	int x = 1;
	while (t--)
	{
		cout << "Case " << x << ": ";
		int n;
		cin >> n;
		if (cube[n].first)
		{
			cout << cube[n].second << endl;
		}
		else
		{
			cout << "Not Cube Free" << endl;
		}
		x++;
	}
	/*int c = 1;

	for (int i = 1; i <= 49; i++)
	{
		if (cube[i])
		{
			cout << c << " " << i << endl;
			c++;
		}
	}*/








}
