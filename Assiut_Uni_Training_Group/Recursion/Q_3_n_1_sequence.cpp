#include <bits/stdc++.h>
using namespace std;

int count(int n) {

    if (n==1) return 1;
    if (n%2 == 0) {
        return 1 + count(n/2);
    } else {
        return 1 + count((3*n)+1);
    }
    
}

int main()
{
    vector<int> vec;
    int n;
    cin>>n;
    vec.push_back(n);

    int ans = count(n);
    cout<<ans;

    return 0;
}