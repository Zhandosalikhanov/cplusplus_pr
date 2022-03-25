#include<bits/stdc++.h>
using namespace std;

vector<int> all_finds(string s, string t)
{
    vector<int> v;
    for (size_t i = 0; i < t.size(); i++)
        v.push_back(int(s.find(t[i])));
    sort(v.begin(), v.end());
    return v;
}

long fact(int n)
{
    if(n == 0)
    return 1;

    return n * fact(n - 1);
}

int main()
{
    string s, t;
    cout << "Enter a string:" << endl;
    cin >> s;  
    cout << "Enter the string of characters that should be beside:" << endl;
    cin >> t;
    sort(s.begin(), s.end());
    
    int cnt = 0;

    do
    {
        all_finds(s, t);
        if(all_finds(s, t)[all_finds(s, t).size() - 1] - all_finds(s, t)[0] + 1 == t.size())
            cnt++;
    } while (next_permutation(s.begin(), s.end()));
    
    cout << "Number of favorable events: " << cnt << endl;
    cout << "Number of all permutations: " << fact(s.size()) << endl;
    cout << "The probability that these characters will be beside: " << cnt / double(fact(s.size()));
}