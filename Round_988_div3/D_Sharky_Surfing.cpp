#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int h, p, d;
    cin>>h>>p>>d;

    map<int, int> mp;
    for(int i=0; i<h; i++) 
    {
        int x, y;
        cin>>x>>y;
        mp[x] = y-x;
    }
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