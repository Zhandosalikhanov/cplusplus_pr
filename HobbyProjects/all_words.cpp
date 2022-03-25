#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int j = 3;

    sort(s.begin(), s.end());
    while (j <= s.size())
    {
        do
        {
            for (size_t i = 0; i < j; i++)
            {
                cout << s[i];
            }
            cout << "-";

        } while (next_permutation(s.begin(), s.end()));
        j++;
        cout << endl << endl;
    }
    
}