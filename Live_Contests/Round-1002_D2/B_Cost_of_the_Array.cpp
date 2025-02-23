#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    if (k == n)
    {
        int x = 1; 
        bool flag = false;
        for(int i=1; i<n; i+=2) {
            if (v[i] != x) {
                flag = true;
                break;
            }
            x++;
        }
        cout<<x<<nl;
        
    } else {
        bool flag = false;
        for(int j=1; j<(n-(k-2)); j++) {
            if (v[j] != 1) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout<<1<<nl;
        } else {
            cout<<2<<nl;
        }
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