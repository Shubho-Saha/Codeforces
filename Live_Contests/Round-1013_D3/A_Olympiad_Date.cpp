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

    int zero = 3, one = 1, two = 2, three = 1, five = 1;
    
    int ans = -1;
    for(int i=1; i<=n; i++) {
        int x; cin>>x;
        if (x == 0) {
            zero--;
        } else if (x == 1) {
            one--;
        } else if (x == 2) {
            two--;
        } else if (x == 3) {
            three--;
        } else if (x == 5) {
            five--;
        }
      

        if (zero <= 0 && one <= 0 && two <=0 && three <=0 && five <=0) {
            if (ans == -1) {
                ans = i;
            }
        }
    }

    if (ans == -1) {
        cout<<0<<nl;
    } else {
        cout<<ans<<nl;
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