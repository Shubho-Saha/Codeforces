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
    vector<int> vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    bool flag = true;
    for(int i=0; i<n; i++) {
        if ((vec[i] < i) || (vec[i] > i+2)) {
            flag = false;
            break;
        }
    }
    if (flag) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
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