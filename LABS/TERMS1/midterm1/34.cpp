#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 15, cnt = 0, cnt1 = 0;
    string s = "PS, PR, PP, SP, SR, SS, RS, RP, RR";
    vector<char> v;
    vector<char> v1;
    char x;
    for (size_t i = 0; i < 15; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (size_t i = 0; i < 15; i++)
    {
        cin >> x;
        v1.push_back(x);
    }
    for (size_t i = 0; i < 15; i++)
    {
        switch(v[i])
        {
            case 'P':
                switch (v1[i])
                {
                case 'S':
                    cnt1++;
                    break;
                case 'R':
                    cnt++;
                    break;
                default:
                    break;
                }
                break;
            case 'R':
                switch (v1[i])
                {
                case 'S':
                    cnt++;
                    break;
                case 'P':
                    cnt1++;
                    break;
                default:
                    break;
                }
                break;
            case 'S':
                switch (v1[i])
                {
                case 'P':
                    cnt++;
                    break;
                case 'R':
                    cnt1++;
                    break;
                default:
                    break;
                }
                break;
        }
    }
    if(cnt > cnt1)
    {
        cout << "First player wins!";
    }else if(cnt < cnt1)
    {
        cout << "Second player wins!";
    }else{
        cout << "Friendship";
    }
}