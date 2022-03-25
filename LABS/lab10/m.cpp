#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m;
    vector<int> v, v1;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (size_t i = 0; i < m; i++)
    {
        cin >> x;
        v1.push_back(x);
    }

    vector<int> :: iterator it, it1;
    it = unique(v.begin(), v.end());
    it1 = unique(v1.begin(), v1.end());
    v.resize(distance(v.begin(),it));
    v1.resize(distance(v1.begin(),it1));
    vector<int> sum(v.size() + v1.size());

    for(int i = 0;i<sum.size();i+=2){
		sum[i] = v[i/2];
	}
	for(int i = 1;i<v.size();i+=2){
		sum[i] = v1[i/2];
	}

	vector<int>:: iterator it0;
	it0 = unique(v.begin(),v.end());
	v.resize(distance(v.begin(),it0));

	for(int i = 0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}