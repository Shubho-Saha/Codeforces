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
        string s;
        cin>>s;
        int n = s.size();

        bool flag = false;
        for(int i=0; i<n-1; i++) {
            if (s[i] == s[i+1]) {
                flag = true;
            }
        }
        
        if (flag) {
            cout<<1<<nl;
        } else {
            cout<<n<<nl;
        }
    }

    return 0;
}