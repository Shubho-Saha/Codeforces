#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int k;
    cin >> k;
    vector<int> vec(k);
    map<int, int> mp;
    for (int i = 0; i < k; i++)
    {
        cin >> vec[i];
        mp[vec[i]]++;
    }
    int n = k - 2;

    for (int i = 0; i < k; i++)
    {
        if (n % vec[i] == 0)
        {
            int x = n / vec[i];
            if (x == vec[i])
            {
                if (mp[x] > 1) {
                    cout<<x<<" "<<vec[i]<<nl;
                    break;
                }
            } else {
                if (mp.find(x) != mp.end()) {
                    cout<<x<<" "<<vec[i]<<nl;
                    break;
                }
            }
        }
    }
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