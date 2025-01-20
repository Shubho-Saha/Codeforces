#include <bits/stdc++.h>
using namespace std;

long long int suffixSum(int *arr, int n, int m) {

    if (m == 0) return 0;
    return arr[n-m] + suffixSum(arr, n, m-1);
}


int main()
{
    int n, m;
    cin>>n>>m;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    long long int sum = suffixSum(arr, n, m);
    cout<<sum;



    return 0;
}