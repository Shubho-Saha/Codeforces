#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, m, k;
    cin>>n>>m>>k;

    int up = max(n, m);
    int low = abs(n-m);

    if (k < low || k > up) {
        cout<<-1<<nl;
    } else {

        int zerocnt = n, onecnt = m;
        if (zerocnt < onecnt) {
            for(int i=1; i<=k; i++) {
                cout<<1;
                onecnt--;
            }
            while(zerocnt > 0 || onecnt > 0) {
                if (zerocnt > 0) {
                    cout<<0; zerocnt--;
                }
                if (onecnt > 0) {
                    cout<<1; onecnt--;
                }
            }
            cout<<nl;

        } else {
            for(int i=1; i<=k; i++) {
                cout<<0;
                zerocnt--;
            }

            while(zerocnt > 0 || onecnt > 0) {
                if (onecnt > 0) {
                    cout<<1; onecnt--;
                }
                if (zerocnt > 0) {
                    cout<<0; zerocnt--;
                }
            }
            cout<<nl;

        }
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