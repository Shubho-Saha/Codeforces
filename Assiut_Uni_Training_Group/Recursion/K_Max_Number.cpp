#include <bits/stdc++.h>
using namespace std;

int maxNumber(int *arr, int n) {
    if (n == 0) return arr[0];
    return max(arr[n], maxNumber(arr, n-1));
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int ans = maxNumber(arr, n-1);
    cout<<ans;

    return 0;
}