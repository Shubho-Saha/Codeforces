#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    int idx = -1;
    for(int i=n-1; i>=0; i--) {
        if (s[i] != '0') {
            idx = i;
            break;
        }
    }

    int a = n - idx - 1;
    int cnt = 0;
    for(int i=0; i<idx; i++) {
        if (s[i] != '0') {
            cnt++;
        }
    }
    
    cout<<(a+cnt)<<nl;
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}