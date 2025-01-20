#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int *arr, int l, int r) {
    if (l == r || l > r) return true;
    return ( (arr[l] == arr[r]) && isPalindrome(arr, l+1, r-1));
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    bool ans = isPalindrome(arr, 0, n-1);

    if (ans) cout<<"YES";
    else cout<<"NO";

    return 0;
}