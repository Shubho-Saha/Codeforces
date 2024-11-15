#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n < 26)
    {
        if (n % 2 != 0)
        {
            cout << -1 << nl;
        }
        else
        {
            int k = 1;
            for (int i = 1; i <= (n / 2); i++)
            {
                cout << k << " " << k << " ";
                k++;
            }
            cout << nl;
        }
    }
    else
    {
        if (n % 2 != 0)
        {
            int k = 2;
            int cnt = 0;
            for (int i = 1; i <= n; i++)
            {
                if (i==1 || i==10 || i== 26) {
                    cout<<1<<" ";
                }else if (i == 23 || i==27) {
                    cout<<99999<<" ";
                } else  {               
                    cout<<k<<" ";
                    cnt++;
                    if (cnt == 2) {
                        k++;
                        cnt = 0;
                    }
                }
            }
            cout<<nl;
        }
        else
        {
            int k = 1;
            for (int i = 1; i <= (n / 2); i++)
            {
                cout << k << " " << k << " ";
                k++;
            }
            cout << nl;
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