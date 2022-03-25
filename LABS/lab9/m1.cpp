#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<string> q;
    int x;
    string s;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        if(x == 2)
        {
            q.pop();
        }else{
            cin >> s;
            q.push(s);
        }

        if(q.empty())
        cout << "queue is empty\n";
        else
        cout << q.front() << "\n";
    }    
}