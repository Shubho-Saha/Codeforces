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
        int n;
        cin>>n;

        set<int> ache;
        vector<int> vec;
        for(int i=0; i<n; i++) {
            int x;
            cin>>x;
            if (ache.count(x) == 0) {
                vec.push_back(x);
                ache.insert(x);
            }
        }

        set<int> nai;
        for(int i=1; i<=n; i++) {
            if (ache.count(i) == 0) {
                nai.insert(i);
            }
        }

        for(auto x : vec) {
            cout<<x<<" ";
        }
        for(auto x : nai) {
            cout<<x<<" ";
        }
        cout<<nl;
    }

    return 0;
}