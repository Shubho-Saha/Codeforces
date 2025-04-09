#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool isPrime(int n)
{
    if (n % 2 == 0) {
        if (n == 2) return true;
        return false;
    }

    for(int i=2; i*i <=n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve()
{
    int n, k;
    cin>>n>>k;

    if (n == 1) {
        if (k==2) {
            cout<<"YES"<<nl;
        } else {
            cout<<"NO"<<nl;
        }
        return;
    }

    bool flag = isPrime(n);
    if (flag && k==1) {
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
    while(t--) {
        solve();
    }

    return 0;
}