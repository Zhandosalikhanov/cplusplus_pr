#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n == 0)
    {
        cout << "None";
    }
    else if (n % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }

    return 0;
}