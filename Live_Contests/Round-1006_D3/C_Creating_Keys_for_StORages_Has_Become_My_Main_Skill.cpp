#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    if (n == 1) {
        cout << x << nl;
        return;
    }

    int pos = -1;
    int limit = __lg(x);
    for (int i = 0; i <= limit + 1; i++) {
        if (((x >> i) & 1) == 0) {
            pos = i;
            break;
        }
    }

    int ans = 0; limit = (1 << pos);
    vector<int> v;
    for (int i = 0; i < n - 1; i++) {
        ans |= i;
        if (ans <= x && i < limit) {
            v.push_back(i);
        } else {
            v.push_back(0);
        }
    }

    int newAns = ans | (n - 1);
    if (newAns == x){
        v.push_back(n - 1);
    } else {
        v.push_back(x);
    }

    for (auto x : v) {
        cout << x << " ";
    }
    cout << nl;
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