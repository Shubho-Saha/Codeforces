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
    multiset<int> st;
    map<int, int> mp;

    for(int i=0; i<n; i++) {
        int x; cin>>x;
        if (st.count(x) != 0) {
            mp[x]++;
        }
        st.insert(x);
    }

    if (mp.size() > 1) {
        auto first = mp.begin();
        int a = first->first;
        auto second = ++first;
        int b = second->first;
        cout<<a<<" "<<a<<" "<<b<<" "<<b<<nl;
        
    } else if (mp.size() == 0){
        cout<<-1<<nl;
    } else if (mp.size() == 1){
        auto it = mp.begin();
        int key = it->first;
        int cnt = it->second;
        if (cnt >= 3) {
            cout<<key<<" "<<key<<" "<<key<<" "<<key<<nl;
            return;
        }

        int range = 2*key;
        st.erase(key);
        if (cnt == 2) {
            st.insert(key);
        }
        
        int x, y;
        bool flag = false;
        auto end = --st.end();
        for(auto it = st.begin(); it != end; ) {
            int c = *it;
            ++it;
            if (it == st.end()) break;
            int d = *it;
            if (abs(c-d) < range) {
                x = c; y = d;
                flag = true;
                break;
            }
        }
        if (flag) {
            cout<<key<<" "<<key<<" "<<x<<" "<<y<<nl;
        } else {
            cout<<-1<<nl;
        }

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