#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

void solve()
{
    int n, m, end;
    cin>>n>>m>>end;
    vector<int> l(n), r(n);
    for(int i=0; i<n; i++) {
        cin >> l[i] >> r[i];
    }

    vector<int> x(m), v(m);
    for(int i=0; i<m; i++) {
        cin >> x[i] >> v[i];
    }

    priority_queue<int> pq;
    ll jmp = 1, cnt = 0;
    
    for(int i=0, j=0; i<n; i++)
    {
        while(j < m && x[j] < l[i]) {
            pq.push(v[j]);
            j++;
        }
        
        ll need = r[i] - l[i] + 2;
        while(jmp < need)
        {
            if (pq.empty())
            {
                cout<<-1<<nl;
                return;
            }
            jmp += pq.top();
            pq.pop();
            cnt++;
        }
    }

    cout<<cnt<<nl;
    
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