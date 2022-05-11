#include <iostream>
#include <map>
#include <string>
using namespace std;

int lg2(int n)
{
    if (n == 1)
        return 0;
    return 1 + lg2(n / 2);
}

map <string, int> matches;
map <pair<string, string>, pair<int, int> > all;
int n, teams, stages;

int main()
{
    cin >> n;
    teams = n + 1;
    stages = lg2(teams);

    string s;
    
    for (size_t i = 0; i < 7; i++)
    {
        getline(cin, s);

    }
    
}