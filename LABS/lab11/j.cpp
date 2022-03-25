#include <bits/stdc++.h>
using namespace std;
int x, y;

bool comp(pair<int, int> p, pair<int, int> p1)
{
    return sqrt((x - p.first) * (x - p.first) + (y - p.second) * (y - p.second)) 
    < sqrt((x - p1.first) * (x - p1.first) + (y - p1.second) * (y - p1.second));
}

int main()
{
    cin >> x >> y;
    int n;
    cin >> n;
    vector<pair<int, int> > v;
    int x1, y1;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x1 >> y1;
        v.push_back(make_pair(x1, y1));
    }
    sort(v.begin(), v.end(), comp);
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    
}