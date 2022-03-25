#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<string> q;
    vector<string> v;
    int x;
    string s, t = "queue is empty";

    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        if(x == 1)
        {
            cin >> s;
            q.push(s);
            v.push_back(s);
        }else{
            q.pop();
            if(q.empty()) v.push_back(t);
            else{
                cin >> s;
                v.push_back(s);
            }
        }
    }
    
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    
}