#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool isPalindrome(string s, int l, int r) {
    while(l <= r) {
        if (s[l] != s[r]) return false;
        l++, r--;
    }
    return true;
}

bool good(string s, int l, int r, int len)
{
    vector<int> cnt(26, 0);
    for(int i=0; i<len; i++) {
        char c = s[l+i];
        cnt[c-'a']++;
    }

    if (len > (r-l+1)/2) {
        len = r-l+1 - len;
    }

    for(int i=0; i<len; i++) {
        char c = s[r-i];

        if (cnt[c-'a'] <= 0) return false;
        cnt[c-'a']--;
    }

    return true;
}

int minLength(string str)
{
    int n = str.size();
    int l=0, r=n-1;

    while(l < r && str[l] == str[r]) {
        l++; r--;
    }
    if (l > r) return 0;

    int low = 0, high = n, ans;
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        int mid_left = l + mid;
        int mid_right = r - mid;

        if (isPalindrome(str, mid_left, mid_right) && good(str, l, r, mid)) {
            ans = mid;
            high = mid-1;
        } else {
            low = mid+1;
        }

    }

    return ans;


}

void solve()
{
    string s;
    cin>>s;

    int res1 = minLength(s);
    reverse(all(s));
    int res2 = minLength(s);

    cout<<min(res1, res2)<<nl;

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