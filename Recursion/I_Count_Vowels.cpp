#include <bits/stdc++.h>
using namespace std;

int vowelCount(string s, int ln ) {
    if (ln < 0) return 0;

    if (s[ln] == 'a' || s[ln] == 'e' || s[ln] == 'i' || s[ln] == 'o' || s[ln] == 'u' || s[ln] == 'A' || s[ln] == 'E' || s[ln] == 'I' || s[ln] == 'O' || s[ln] == 'U') {
        return 1 + vowelCount(s, ln-1);
    } else {
        return vowelCount(s, ln-1);
    }
    


    
}

int main()
{
    string s;
    getline(cin, s);

    int length = s.size();

    int count = vowelCount(s, length-1);
    cout<<count;

    return 0;
}