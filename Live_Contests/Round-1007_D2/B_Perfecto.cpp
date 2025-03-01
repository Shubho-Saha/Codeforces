#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool isSqrt(ll sum)
{    
    ll a = sqrt(sum);
    if (a*a == sum) return true;
    return false;
}

void solve()
{
    int n;
    cin>>n;

    ll total = (n*(n+1))/2;
    ll sq = sqrt(total);

    if (sq*sq == total) {
        cout<<-1<<nl;
        return;
    }

    vector<int> v;
    deque<int> rem;
    ll sum = 0;
    for(int i=1; i<=n; i++) {
        ll crnt = sum + i;
        if (isSqrt(crnt)) {
            rem.push_back(i);
            crnt -= i;
            continue;
        }
        v.push_back(i);
        sum = crnt;
    }

    bool flag = false;
    while(!rem.empty())
    {
        int val = rem.front();
        ll crnt = sum + val;
        if (isSqrt(crnt)) {
            rem.pop_front();
            if (rem.empty()) {
                flag = true;
                break;
            }
            rem.push_back(val);
            crnt -= val;
            continue;
        }
        v.push_back(val);
        rem.pop_front();
        sum = crnt;
    }

    if (flag) {
        cout<<-1<<nl;
    } else {
        for(auto x : v) {
            cout<<x<<" ";
        }
        cout<<nl;
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