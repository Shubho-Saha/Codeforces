#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() 
{
    int n, m;
    cin>>n>>m;
    vector<int> Xf, Xs, Yf, Ys;
    int crntXf = 0, crntXs=m;
    int crntYf = 0, crntYs = m;
    for(int i=0; i<n; i++) {
        int xi, yi;
        cin>>xi>>yi;
        crntXf += xi; crntXs += xi;
        crntYf += yi; crntYs += yi;
        Xf.push_back(crntXf); Xs.push_back(crntXs);
        Yf.push_back(crntYf); Ys.push_back(crntYs);
    }

    if (n == 1) {
        cout<<(m+m)*2<<nl;
        return;
    }

   int totalOverLap = 0;
   for(int i=0; i<n-1; i++) {
    int xoverlap = Xs[i] - Xf[i+1];
    int yoverlap = Ys[i] - Yf[i+1];
    int overlap = (xoverlap + yoverlap)*2;
    totalOverLap += overlap;
   }

   int totalperi = ((m+m) * 2)*n;
//    cout<<totalperi<<nl;
   int ans = totalperi - totalOverLap;
   cout<<ans<<nl;
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