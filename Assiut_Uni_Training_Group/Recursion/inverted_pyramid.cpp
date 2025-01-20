#include <bits/stdc++.h>
using namespace std;

void print(int n, int space, int star)
{
    if (n == 0)
        return;
    print(n-1, space-1, star+2);
    for (int j = 1; j <= space; j++)
    {
        cout << " ";
    }

    for (int j = 1; j <= star; j++)
    {
        cout << "*";
    }
    cout<<endl;
    
}
int main()
{
    int n;
    cin >> n;

    int space = n - 1;
    int star = 1;
    print(n, space, star);

    return 0;
}