#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin>>a>>b;

    // checking if the length of both string equal or not.
    if (a.size() != b.size()) {
        cout<<"NO";
        return 0;
    }

    //creating two frequency vector to store the frequency of the letters for both string.
    vector<int> freqA(26, 0);
    vector<int> freqB(26, 0);
    // counting letters of string A
    for(char c:a) {
        freqA[c-'a']++;
    }
    //counting letters of string B
    for(char c:b) {
        freqB[c-'a']++;
    }

    // checking if the frequency of letters in both string same or not. if they are not same then it's not possible to make the two string equal.
    for(int i=0; i<26; i++) {
        if (freqA[i] != freqB[i]) {
            cout<<"NO";
            return 0;
        }
    }

    // if the code comes that far. that means both string has same length and they have the same frequency for each letter. Now there's two possibility. either both string exactly the same (like A="sad" B="sad" or A="mom" B="mom") or they are not the same. here we've handled if the both string is same and we must make one swap in string A and see even after swaping can string A be the same as string B.
    bool flag = false;
    if (a == b) {
        for(int i=0; i<26; i++) {
            // if any letter in string A exists more than once. we can swap them and the string will remain the same. e.g A="mom" here the letter "m" exists twice. so if we swap them the string will remain the same.
            if (freqA[i] > 1) {  
                flag = true;
            }
        }

        if (flag) {
            cout<<"YES";
        } else {
            cout<<"NO";
        }
        return 0;
    }

    // if the code comes this far that means two string has same frequency but the two string isn't the same. for example (A="abc" B="acb") So here we check if one swap can make them equal.
    int cnt = 0;
    for(int i=0; i<a.size(); i++) {
        if (a[i] != b[i]) {
            cnt++;
        }
    }
    
    if (cnt > 2) cout<<"NO";
    else cout<<"YES";

    return 0;
}