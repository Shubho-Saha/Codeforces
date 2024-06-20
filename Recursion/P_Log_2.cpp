#include <bits/stdc++.h>
using namespace std;

int log2(long long int n) {
    if (n==1) return 0;
    return 1 + log2(n/2);
}

int main()
{
    long long int n;
    cin>>n;

    int ans = log2(n);
    cout<<ans;

    return 0;
}