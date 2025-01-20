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
    map<int, int> larger;
    for(int i=0; i<n; i++) {
        cin>>vec[i];
        mp[vec[i]]++;
        
    }
    int count = 0;
    for(auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        larger[it->first] = count;
        count += it->second;
    }

    if (n==1) {
        cout<<0<<nl;
        return;
    }

    int mnAns = INT_MAX;
    for(int i=0; i<n; i++)
    {
        mnAns = min(mnAns, (i+larger[vec[i]]));
    }
    cout<<mnAns<<nl;
    return;

    
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