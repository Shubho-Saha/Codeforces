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
    ll n, m, l;
    cin >> n >> m >> l;
    deque<pair<ll, ll>> gap, power;
    for(int i=1; i<=n; i++) {
        ll a, b;
        cin>>a>>b;
        gap.push_back({a,b});
    }
    for(int i=1; i<=m; i++) {
        ll x, p;
        cin>>x>>p;
        power.push_back({x, p});
    }


    bool flag = false;
    ll jump = 1, cnt = 0;
    priority_queue<ll> pq;
    while(true)
    {
        if (gap.empty()) {
            break;
        } else {
            ll gapStart = gap[0].first;
            ll gapEnd = gap[0].second;

            while(!power.empty() && power[0].first < gapStart) {
                pq.push(power[0].second);
                power.pop_front();
            }

            ll need = gapEnd - gapStart + 2;
            while(jump < need) {
                if (!pq.empty()) {
                    ll tp = pq.top();
                    pq.pop();
                    jump += tp;
                    cnt++;
                } else {
                    cout<<-1<<nl;
                    return;
                }               
            }

            gap.pop_front();
            
        }

    }

    cout<<cnt<<nl;
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