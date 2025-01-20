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
        vector<int> mono(n), stero(n);
        for(int i=0; i<n; i++) {
            cin>>mono[i];
        }
        for(int i=0; i<n; i++) {
            cin>>stero[i];
        }

        int monoCount = mono[n-1];
        int stereoCount = 0;

        for(int i=0; i<n-1; i++)
        {
            if (mono[i] > stero[i+1])
            {
                monoCount += mono[i];
                stereoCount += stero[i+1];
            }
        }

        cout<<(monoCount - stereoCount)<<nl;
    }

    return 0;
}