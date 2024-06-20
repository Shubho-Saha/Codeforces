#include <bits/stdc++.h>
using namespace std;

long long int factorial(long long int n) {
    if (n==0) return 1;
    return n * factorial(n-1);
}

int main()
{
    long long int n;
    cin>>n;

    long long int sum = factorial(n);
    cout<<sum;

    return 0;
}