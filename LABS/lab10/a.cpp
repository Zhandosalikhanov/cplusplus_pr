#include <bits/stdc++.h>
using namespace std;

int main()
{
    typedef multiset<int> It;
    typedef multiset<string> IT;
    int n;
    cin >> n;

    multiset<string> mm1;
    It mm;
    for (size_t i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        mm1.insert(s);
        mm.insert(x);
    }
    
    It :: iterator it = mm.begin();
    IT :: iterator it1 = mm1.begin();
    for (; it != mm.end(); it++, it1++)
    {
        cout << *it1 << " " << *it << endl;
    }
    
}