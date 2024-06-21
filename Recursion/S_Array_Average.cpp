#include <bits/stdc++.h>
using namespace std;

double average(int *arr, int n, int m) {
    if (n==0) return (arr[0]*1.0)/m;
    return (arr[n]*1.0)/m + average(arr, n-1, m);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    double ans = average(arr, n-1, n);
    cout<<fixed<<setprecision(6)<<ans;
    

    return 0;
}