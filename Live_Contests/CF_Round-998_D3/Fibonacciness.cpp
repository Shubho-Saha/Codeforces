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
        int a1, a2, a4, a5;
        cin>>a1>>a2>>a4>>a5;

        int cnt1 = 1;
        int a3_1 = a1 + a2;
        if (a2+a3_1 == a4) {
            cnt1++;
        }
        if (a3_1 + a4 == a5) {
            cnt1++;
        }

        int cnt2 = 1;
        int a3_2 = a5 - a4;
        if (a4 == a3_2 + a2) {
            cnt2++;
        }
        if (a3_2 == a1 + a2) {
            cnt2++;
        }

        cout<<max(cnt1, cnt2)<<nl;
    }

    return 0;
}