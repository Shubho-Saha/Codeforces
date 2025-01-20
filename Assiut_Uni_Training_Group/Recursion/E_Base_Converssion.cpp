#include <bits/stdc++.h>
using namespace std;

string baseConverse(int n)
{
    if (n == 1)
        return "1";
    return  baseConverse(n / 2) + to_string(n % 2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string ans = baseConverse(n);
        cout << ans<<endl;
    }

    return 0;
}