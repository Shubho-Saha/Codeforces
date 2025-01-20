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
    vector<int> vec;
    vector<pair<int,int>> pvec(n);
    map<int, int> mp;
    vector<int> res(n);
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin>>a>>b;
        if (a==b) {
            if (mp.count(a) == 0) {
                vec.push_back(a);
            }
            mp[a]++;
        }
        pvec[i] = {a, b};
    }
    
    sort(all(vec));
    
    for(int i=0; i<n; i++)
    {
        int low = pvec[i].first;
        int high = pvec[i].second;
        
        if (low == high)
        {
            if (mp[low] > 1) {
                res[i] = 0;
            } else {
                res[i] = 1;
            }
        } else {
            if (mp.count(low) == 0 || mp.count(high) == 0) {
                res[i] = 1;
            } else {
                auto lowit = lower_bound(all(vec), low);
                int lowIdx = lowit - vec.begin();
                auto highit = lower_bound(all(vec), high);
                int highIdx = highit - vec.begin();

                if ((highIdx - lowIdx) == (high - low)) {
                    res[i] = 0;
                } else {
                    res[i] = 1;
                }
            }
        }

    }

    for(auto x : res) {
        cout<<x;
    }
    cout<<nl;
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}