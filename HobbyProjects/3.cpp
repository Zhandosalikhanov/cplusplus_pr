#include <bits/stdc++.h>

using namespace std;

int sum_of_vec(vector<int> v)
{
    int sum = 0;
    for(int i = 0; i < v.size(); i++)
        sum += v[i];

    return sum;
}

void print(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i= 1; i <= n; i++)
        v.push_back(i);

    do
    {
        vector<int> v1(v.begin(), v.begin() + (n / 2));
        vector<int> v2(v.begin() + (n / 2), v.end());

        if(sum_of_vec(v1) == sum_of_vec(v2))
        {
            cout << v1.size() << endl;
            print(v1);
            cout << endl << v2.size() << endl;
            print(v2);
            return 0;
        }
    } while (next_permutation(v.begin(), v.end()));
    cout << "NO";
}