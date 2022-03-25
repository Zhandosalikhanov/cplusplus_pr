#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h = 0, d = 0, o = 0;
    cin >> n;
    char x;
    vector<char> v;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        switch(x)
        {
            case 'H': h++;
            break;
            case 'O': o++;
            break;
            case 'D': d++;
            break;
        }
        v.push_back(x);
    }
    cout << "Orks: " << o / 3 << endl << "Dragons: " << d / 3 << endl << "Humans: " << h / 3;
}