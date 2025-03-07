#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool isSquare(ll num) {
    ll sq = sqrt(num);
    return (sq*sq == num);
}
void solve()
{
    ll n;
    cin>>n;
    ll total = (n*(n+1))/2;
    if (isSquare(total)) {
        cout<<-1<<nl;
        return;
    }

    vector<int> v;
    for(int i=1; i<=n; i++) {
        v.push_back(i);
    }

    ll prev = 0;
    for(int i=0; i<n-1; i++) {
        ll crnt = prev + v[i];

        if (isSquare(crnt)) {
            swap(v[i], v[i+1]);
        }
        prev += v[i];
    }

    for(auto x : v) {
        cout<<x<<" ";
    }
    cout<<nl;

}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}