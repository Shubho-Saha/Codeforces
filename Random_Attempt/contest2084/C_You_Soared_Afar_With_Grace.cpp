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

    vector<int> a(n+1), b(n+1), bidx(n+1);
    for(int i=1; i<=n; i++) {
        cin>>a[i];
    }

    for(int i=1; i<=n; i++) {
        cin>>b[i];
        bidx[b[i]] = i;
    }

    vector<int> a2b(n+1);
    for(int i=1; i<=n; i++) {
        int av = a[i];
        int bv = b[i];
        a2b[av] = bv;
    }

    bool flag = true, f = false;
    int midx = -1;
    for(int i=1; i<=n; i++) {
        int cv = a2b[i];
        if (a2b[cv] != i) {
            flag = false;
        }

        if (cv == i) {
            if (f == false) {
                f = true;
                midx = bidx[cv];
            } else {
                flag = false;
            }
        }
    }

    if (flag == false) {
        cout<<-1<<nl;
        return;
    }

    vector<pair<int,int>> res;
    if (n%2 != 0) {
        int sidx = (n+1)/2;
        if (midx != sidx) {
            int sbval = b[sidx];
            int mbval = b[midx];
            swap(a[midx], a[sidx]);
            swap(b[midx], b[sidx]);
            res.push_back({midx, sidx});
            bidx[sbval] = midx;
            bidx[mbval] = sidx;
        }
    }

    for(int i=1; i<= (n/2); i++) {
        int aval = a[i];
        int crntidx = bidx[aval];
        int desidx = n+1-i;
        if (crntidx != desidx) {
            int desVal = b[desidx];
            res.push_back({crntidx, desidx});
            swap(a[crntidx], a[desidx]);
            swap(b[crntidx], b[desidx]);
            bidx[desVal] = crntidx;
            bidx[aval] = desidx;
        }
    }

    cout<<res.size()<<nl;
    for(auto [f, s] : res) {
        cout<<f<<" "<<s<<nl;
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