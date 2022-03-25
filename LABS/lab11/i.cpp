#include <bits/stdc++.h>
using namespace std;

bool isPal(vector<char> v)
{
    vector<char> v1 = v;
    reverse(v.begin(), v.end());
    if(v == v1) 
    return 1;

    return 0;
}

int main()
{
    string s;
    cin >> s;
    vector<char> v;
    for (size_t i = 0; i < s.size(); i++)
        v.push_back(s[i]);

    sort(v.begin(), v.end());
    
    do
    {
        if(isPal(v))
        {
            cout << "ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    } while (next_permutation(v.begin(), v.end()));
    cout << "JOJO";
}