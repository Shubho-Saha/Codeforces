#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    int x; cin>>x;
    int first = x - a[0];
    if (first < a[0]) {
        a[0] = first;
    }

    for(int i=1; i<n; i++) {
        int crnt = a[i];
        int neew = x - crnt;
        if (crnt < a[i-1]){
            if (neew >= a[i-1]) {
                a[i] = neew;
            }
        } else {
            if (neew >= a[i-1] && neew <= crnt) {
                a[i] = neew;
            }
        }
    }

    if (is_sorted(all(a))) {
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