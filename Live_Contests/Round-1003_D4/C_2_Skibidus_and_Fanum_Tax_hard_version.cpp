#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    for(int i=0; i<m; i++) {
        cin>>b[i];
    }
    sort(all(b));

    int first = b[0] - a[0];
    if (first < a[0]) {
        a[0] = first;
    }

    bool flag = true;
    for (int i=1; i<n; i++) {
        int crnt = a[i];
        if (crnt < a[i-1]) {
            int need = crnt + a[i-1];
            auto it = lower_bound(all(b), need);
            if (it == b.end()) {
                flag = false;
                break;
            } else {
                int neew = *it - crnt;
                a[i] = neew;
            }
        } else {
            int need = crnt + a[i-1];
            auto it = lower_bound(all(b), need);
            if (it != b.end()) {
                int neew = *it - crnt;
                if (neew >= a[i-1] && neew <= crnt) {
                    a[i] = neew;
                }
            }
        }
    }

    if (is_sorted(all(a))) {
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
    while(t--)
    {
        solve();
    }

    return 0;
}