#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        int m, a, b, c;
        cin>>m>>a>>b>>c;

    
        int arem, brem;
        int ans = 0;
        if (a <= m) {
            ans += a;
            arem = m-a;
        } else if (a > m) {
            ans += m;
            arem = 0;
        }

        if (b <= m) {
            ans += b;
            brem = m-b;
        } else if (b > m) {
            ans += m;
            brem = 0;
        }

        int remSeat = arem + brem;
        if (c <= remSeat) {
            ans += c;
        } else {
            ans += remSeat;
        }

        cout<<ans<<nl;

    }

    return 0;
}