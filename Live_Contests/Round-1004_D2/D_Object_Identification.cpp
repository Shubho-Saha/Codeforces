#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int query(int i, int j) {
    cout<<"? "<<i<<" "<<j<<nl;
    
    int ret; 
    cin>>ret;
    return ret;
}

void printA() {
    cout << "! A" << nl;
}

void printB() {
    cout << "! B" << nl;
}


void solve()
{
    int n;
    cin>>n;
    vector<int> v(n+1), cnt(n+1,0);
    for(int i=1; i<=n; i++) {
        cin>>v[i];
        cnt[v[i]] = 1;
    }

    int missing = -1;
    for(int i=1; i<=n; i++) {
        if (cnt[i] == 0) {
            missing = i;
            break;
        }
    }

    if (missing != -1) {
        int val = query(missing, missing == 1 ? 2 : 1);
        if (val == 0) {
            printA();
        } else {
            printB();
        }
    } else {
        int idx1 = -1, idxN = -1;

        for(int j=1; j<=n; j++) {
            if (v[j] == 1) idx1 = j;
            if (v[j] == n) idxN = j;
        }
        int val1 = query(idx1, idxN);
        int val2 = query(idxN, idx1);

        if (min(val1, val2) >= n-1) {
            printB();
        } else {
            printA();
        }
    }

}

int main()
{
    // fastIO();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}