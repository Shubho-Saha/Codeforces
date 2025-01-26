#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    bool flag = true;
    for(int i=0; i<n; i++) {
        int left = i*2, right = ((n-1)-i)*2;
        if (left >= v[i] || right >= v[i]) {
            flag = false;
        }
    }

    if (flag) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
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

// https://codeforces.com/contest/2062/problem/B