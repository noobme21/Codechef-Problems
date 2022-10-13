#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define int long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define mpi map<pii, int>
#define si set<int>
#define spi set<pii>
#define countSetBits(a) __builtin_popcount(a)
#define all(p) p.begin(), p.end()
#define mod 1000000007
#define rep(n) for (int i = 0; i < n; i++)
#define print(a)     \
    for (auto x : a) \
        cout << x << " ";

#define print1(a)    \
    for (auto x : a) \
        cout << x.F << " " << x.S;

#define faster_execution              \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define O cout <<
#define I cin >>

/*   Code by Madhukar aka Er. X
   Ig       ::  @its_er._x
   Linkedin ::  @itserx
   Github   ::  @erx21
*/

void code()
{

    int n;
    I n;
    vi a;
    rep(n)

    {
        int q;
        I q;
        a.pb(q);
    }
    vi d, copy;
    if (n == 1)
    {
        O "0";
        return;
    }
    for (int i = 0; i <= n / 2; i++)
    {
        int diff = a[n - i - 1] - a[i];
        d.pb(diff);
        copy.pb(diff);
    }
    sort(copy.begin(), copy.end(), greater<int>());

    if (d == copy)
    {
        O d[0];
        return;
    }
    O "-1";
}
int32_t main()
{
    faster_execution;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    I t;
    while (t--)
    {
        code();
        O endl;
    }
    return 0;
}