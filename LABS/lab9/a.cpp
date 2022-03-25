#include <bits/stdc++.h>
using namespace std;

// bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
// {
//     return (a.second < b.second);
// }

int main()
{
    bool ans = false;
    int n;
    cin >> n;

    int x, y;
    pair<int, int> p[n];
    vector< pair<int, int> > v;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end());
    
    // , sortbysec

    // for (size_t i = 1; i < v.size() - 1; i++)
    // {
    //     if(v[i].first == v[i - 1].first)
    //     {
    //         ans = true;
    //     }
    // }
    // if(ans == true)
    // {
    //     sort(v.begin(), v.end()), sortbysec;
    //     reverse(v.begin(), v.end());
    // }else{
    //     sort(v.begin(), v.end());
    // }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    
}