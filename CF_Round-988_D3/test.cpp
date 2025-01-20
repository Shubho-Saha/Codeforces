#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;

    if (n < 5) {
        cout<<-1<<nl;
    } else {
        
        vector<int> odd, even;
        vector<int> pre= {4, 2, 6};
        for(int i=1; i<=n; i++) {
            if (i % 2 == 0) {
                even.push_back(i);
            } else {
                odd.push_back(i);
            }
        }
        

        int x = odd[odd.size()-1] - 5;
        // cout<<x<<nl;
        int chosed = 0;
        int divisor = x / 2;
        // cout<<divisor<<nl;
        if (divisor <= 2) {
            chosed = divisor;
        } else {
            chosed = divisor % 3 ;
        }

        // for(int i=0; i<odd.size(); i++) {
        //     cout<<odd[i]<<" ";
        // }
        cout<<odd[odd.size()-1]<<nl;
        int chosedVal = pre[chosed];
        cout<<pre[chosed]<<" ";

        // for(int i=0; i<even.size(); i++) {
        //     if (even[i] != chosedVal) {
        //         cout<<even[i]<<" ";
        //     }
        // }
        cout<<nl;

    }
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}