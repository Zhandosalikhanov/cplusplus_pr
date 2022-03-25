#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    sort(t.begin(), t.end());
    sort(s.begin(), s.end());
    if(s == t)
    {
        cout << "Anagram";
    }else{
        cout << "Not anagram";
    }
}