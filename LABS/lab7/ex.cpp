#include <iostream>
using namespace std;

void free(string s)
{
    int sum;
    for (size_t i = 0; i < s.size(); i++)
    {
        sum += (int)s[i] - 48;
    }
    cout << sum<<endl;
}

int main()
{
    string s;
    cin >> s;
    free(s);

    return 0;
}