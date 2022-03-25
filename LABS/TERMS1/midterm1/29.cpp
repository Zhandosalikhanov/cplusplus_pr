#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (size_t i = 0, j = 2; i < n; i++)
    {
        cout << j << " ";
        j += 3;
    }
    
}