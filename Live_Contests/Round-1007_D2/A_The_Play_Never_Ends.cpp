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
        ll n;
        cin>>n;

        if (n%3 == 1) {
            cout<<"YES"<<nl;
        } else {
            cout<<"NO"<<nl;
        }
    }

    return 0;
}