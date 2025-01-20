#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    ll m, n;
    cin >> m >> n;
    vector<ll> t, z, y;
    for (int i = 0; i < n; i++)
    {
        ll ti, zi, yi;
        cin >> ti >> zi >> yi;
        t.push_back(ti);
        z.push_back(zi);
        y.push_back(yi);
    }

    auto ok = [&](ll sec)
    {
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            ll cycle = (t[i] * z[i]) + y[i];
            cnt += (sec / cycle) * z[i];
            ll rem = sec % cycle;
            rem = min(rem, (t[i] * z[i]));
            cnt += rem / t[i];
        }
        return cnt >= m;
    };

    ll l = -1, r = 3e6, mid;
    while (r > l + 1)
    {
        mid = l + (r - l) / 2;
        if (ok(mid)){
            r = mid;
        } else {
            l = mid;
        }
    }

    cout << r << nl;

    ll sum = 0;
    bool flag = true;
    for (ll i = 0; i < n; i++)
    {
        ll cnt = 0;
        ll cycle = (t[i] * z[i]) + y[i];
        cnt += (r / cycle) * z[i];
        ll rem = r % cycle;
        rem = min(rem, (t[i] * z[i]));
        cnt += rem / t[i];
        sum += cnt;
        if (flag) {
            if (sum <= m){
                cout << cnt << " ";
            } else {
                ll extra = sum - m;
                cout << (cnt - extra) << " ";
                flag = false;
            }
        } else {
            cout<<0<<" ";
        }
    }

    return 0;
}