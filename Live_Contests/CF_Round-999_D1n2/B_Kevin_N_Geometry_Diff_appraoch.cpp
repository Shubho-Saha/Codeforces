#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() {
    int n; cin>>n;
    map<int, int> mp;
    vector<int> res;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        mp[x]++;
        if (mp[x] == 2 || mp[x] == 4) {
            res.push_back(x);
            res.push_back(x);
        }
    }

    sort(all(res)); // sort na korleu hobe
    if (res.size() < 2) {
        cout<<-1<<nl;
    } else if (res.size() > 3) {
        for(int i=0; i<4; i++) {
            cout<<res[i]<<" ";
        }
        cout<<nl;
    } else {
        int val = res[0];
        mp[val] -= 2; 
        if (mp[val] == 0) {
            auto it = mp.find(val);
            mp.erase(it);
        }
        int range = val * 2;
        auto end = --mp.end();
        int x, y;
        bool flag = false;
        for(auto it = mp.begin(); it != end; ++it)
        {
            int c = it->first;
            int d = next(it)->first;
            if (abs(c-d) < range) {
                x = c; y = d;
                flag = true;
                break;
            }
        }

        if (flag) {
            cout<<val<<" "<<val<<" "<<x<<" "<<y<<nl;
        } else {
            cout<<-1<<nl;
        }
    }
}
int main()
{
    fastIO();
    int t; cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}