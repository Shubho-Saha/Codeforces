#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int x; 
    cin>>x;

    int pos = __lg(x);
    bool flag = true;
    for(int k=0; k<=pos; k++) {
        if (((x>>k)&1) == 0) {
            flag = false;
        }
    }

    if (flag) {
        cout<<-1<<nl;
        return;
    }

    int num = (1<<pos);
    if (x == num) {
        cout<<-1<<nl;
        return;
    }

    int y = (1<<pos) - 1;
    cout<<y<<nl;
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