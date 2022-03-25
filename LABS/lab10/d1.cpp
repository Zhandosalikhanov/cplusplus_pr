#include <bits/stdc++.h>
using namespace std;

int sum_of_vector(vector<int> v)
{
    int sum = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}


bool comp(vector<int> v, vector<int> v1)
{
    if(sum_of_vector(v) > sum_of_vector(v1)) return 0;
    if(sum_of_vector(v) == sum_of_vector(v1))
    {
        if(v.size() == v1.size())
        {
            for (size_t i = 0; i < v.size(); i++)
            {
                if(v[i] > v1[i]) return 0;
                else return 1;
            }
            
        }else{
            return v.size() < v1.size();
        }
    }
}

int main()
{
    int n, m;
    cin >> n;

    vector< vector<int> > v;
    vector <int> v1;
    int x;
    for (size_t i = 0; i < n; i++)
    {
        cin >> m;
        for (size_t j = 0; j < m; j++)
        {
            cin >> x;
            v1.push_back(x);
        }
        v.push_back(v1);
        v1.clear();
    }
    sort(v.begin(), v.end(), comp);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    
}