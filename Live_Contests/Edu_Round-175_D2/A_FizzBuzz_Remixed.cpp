#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int a = n / 15;
    ll res = (1ll*a*3);
    int rem = n % 15;
    if (rem == 0) {
        res++;
    } else if (rem == 1) {
        res += 2;
    } else {
        res += 3;
    }

    cout<<res<<nl;
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}