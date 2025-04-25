#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
#include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

void solve()
{
    int n, k;
    cin>>n>>k;

    vector<int> v(n);
    for(auto &it : v) cin>>it;

    auto ok = [&](int f)
    {
        if (f) reverse(all(v));
        
        int small = 0, big = 0, cnt = 0;
        int idx = -1;
        for (int i = 0; i < n;)
        {
            bool ok = false;
            if (v[i] <= k) small++;
            else big++;

            if (small >= big) {
                cnt++;
                if (small > big)
                    ok = true;
                small = 0, big = 0;
            }

            if (cnt == 2)  {
                idx = i + 1;
                break;
            }

            if (ok && i + 1 < n && v[i + 1] > k) {
                i += 2;
            }  else  {
                i++;
            }
        }

        if (idx != -1 && idx < n) return true;
        return false;
    };

    int small = 0, big = 0, left = -1, right = -1;
    for(int i=0; i<n; i++) {
        if (v[i] <=k) small++;
        else big++;
        
        if(small>=big) {
            left = i;
            break;
        }
    }

    small =0, big = 0;
    for(int i=n-1; i>=0; i--) {
        if (v[i]<=k) small++;
        else big++;
        if (small>=big){
            right = i;
            break;
        }
    }

    bool f1, f2, f3;
    f1 = f2 = f3 = false;

    if (right != -1 && left != -1 && right - left > 1) {
        f1 = true;
    }

    f2 = ok(0);
    f3 = ok(1); 

    if (f1 || f2 || f3) {
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
    while(t--) {
        solve();
    }
    
    return 0;
}