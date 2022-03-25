#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string, double> p, pair<string, double> p1)
{
    return p.second > p1.second;
}

void sort_by_val(map<string, double>& m)
{
    vector< pair<string, double> > v;

    map<string, double> :: iterator it = m.begin();
    for(; it!= m.end(); it++)
    {
        v.push_back(make_pair(it -> first, it -> second));
    }
    sort(v.begin(), v.end(), comp);

    vector< pair<string, double> > :: iterator it1 = v.begin();
    for (; it1 != v.end(); it1++)
    {
        cout << it1 -> first << " " << it1 -> second << "%" << endl;
    }
    
}

int main()
{
    int n;
    cin >> n;

    string s;
    int x;
    double sum = 0;
    map<string, double> m;

    for (size_t i = 0; i < n; i++)
    {
        cin >> s >> x;
        m[s] += x;
        sum += x;
    }
    map<string, double> :: iterator it = m.begin();

    for (; it != m.end(); it++)
    {
        it -> second = ((it -> second) * 100) / sum;
    }
    
    sort_by_val(m);
}