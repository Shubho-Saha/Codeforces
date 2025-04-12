#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    int cnt = 0;
    if (n % 2 != 0) {
        n -= k;
        cnt++;
    }

    int a = k - 1;
    cnt += (n/a);
    if (n%a != 0) {
        cnt++;
    }
    cout<<cnt<<nl;


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