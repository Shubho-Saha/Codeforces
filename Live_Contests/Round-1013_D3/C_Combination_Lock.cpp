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

    if (n%2 == 0) {
        cout<<-1<<nl;
        return;
    }

    vector<int> v(n+1);
    int cnt = 1;
    for(int i=1; i<=n; i+=2) {
        v[i] = cnt++;
    } 
    for(int i=2; i<=n; i+=2) {
        v[i] = cnt++;
    }

    for(int i=1; i<=n; i++) {
        cout<<v[i]<<" ";
    }
    cout<<nl;
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