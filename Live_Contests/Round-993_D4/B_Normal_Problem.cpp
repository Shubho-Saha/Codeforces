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

        for(int i=s.size()-1; i>=0; i--)
        {
            if (s[i] == 'p') {
                cout<<'q';
            } else if (s[i] == 'q') {
                cout<<'p';
            } else {
                cout<<'w';
            }
        }
        cout<<nl;
    }

    return 0;
}