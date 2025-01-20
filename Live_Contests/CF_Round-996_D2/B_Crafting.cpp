#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<int> A(n), B(n);
    for(int i=0; i<n; i++) {
        cin>>A[i];
    }

    for(int i=0; i<n; i++) {
        cin>>B[i];
    }

    int less= 0, equal = 0;
    int minNeed, maxPos= INT_MAX;

    for(int i=0; i<n; i++) {
        if (A[i] < B[i]) {
            less++;
            minNeed = abs(A[i] - B[i]);
        } else if (A[i] == B[i]) {
            equal++;
        } else {
            maxPos = min(maxPos, abs(A[i]-B[i]));
        }
    }

    if (less == 0) {
        cout<<"YES"<<nl;
    } else if (less != 0 && equal != 0) {
        cout<<"NO"<<nl;
    } else if (less > 1) {
        cout<<"NO"<<nl;
    } else {
        if (minNeed <= maxPos) {
            cout<<"YES"<<nl;
        } else {
            cout<<"NO"<<nl;
        }
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