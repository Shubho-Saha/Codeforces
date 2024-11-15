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
    map<int, int> mp;

    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
        mp[vec[i]]++;
    }
    int mxCnt = -1;
    int mxVal = -1;
    for(auto [key, val] : mp) {
        if (val > mxCnt) {
            mxCnt = val;
            mxVal = key;
        }
    }

    int first_occ = -1;
    int last_occ = -1;

    for(int i=0; i<n; i++) {
        if (vec[i] == mxVal && first_occ == -1) {
            first_occ = i;
        }
        if (vec[i] == mxVal) {
            last_occ = i;
        }
    }

    cout<<first_occ + (n-(last_occ+1))<<nl;
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