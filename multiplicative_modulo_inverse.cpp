# C_N_number_theory
#include<bits/stdc++.h>
using namespace std;

class trplet
{
public:
	int x;
	int y;
	int gcd;
};

trplet extended_euclid(int a, int b)
{

	if (b == 0)
	{
		trplet lnd;
		lnd.gcd = a;
		lnd.x = 1;
		lnd.y = 0;
		return lnd;
	}

	trplet sa = extended_euclid(b, a % b);
	trplet ans;
	ans.gcd = sa.gcd;
	ans.x = sa.y;
	ans.y = sa.x - (a / b) * sa.y;

	//cout <<  "a=" << a << " " << "b=" << b << endl << sa.x << " " << sa.y <<  endl << ans.x << " " << ans.y << endl << endl;
	return ans;
}

int mminverse(int n, int m)
{
	trplet ans = extended_euclid(n, m);
	return ans.x;
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//int a, b;
	//cin >> a >> b;
	int n, m;
	cin >> n >> m;

	cout << mminverse(n, m);

	//trplet ans = extended_euclid(a, b);
	//cout << ans.gcd << endl << ans.x << endl << ans.y;


}
