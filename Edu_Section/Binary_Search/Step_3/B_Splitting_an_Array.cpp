#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    ll n, k;
    cin>>n>>k;
    vector<ll> v(n);
    ll sum=0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum += v[i];
    }

    auto isGood = [&](ll mxSum) {
        ll segmentCnt = 1;
        ll segSum = 0;
        for(int i=0; i<n; i++) {
            if (v[i] > mxSum) return false;

            if (segSum + v[i] <= mxSum) {
                segSum += v[i];
            } else {
                segmentCnt++;
                segSum = v[i];
                
            }   
        }

        return segmentCnt <= k;
    };

    ll l=0, r=sum+10, mid;
    while(r > l+1) {
        mid = l + (r-l)/2;
        if (isGood(mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }

    cout<<r;

    return 0;
}