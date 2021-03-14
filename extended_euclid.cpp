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
	return ans;
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a, b;
	cin >> a >> b;

	trplet ans = extended_euclid(a, b);
	cout << ans.gcd << endl << ans.x << endl << ans.y;


}
