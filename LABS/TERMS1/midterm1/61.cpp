#include<iostream>
using namespace std;

double GetPriceQualityRatio(double price, double quality);

int main()
{
    int n;
    cin >> n;
    string s, maxi;
    double max = 0;
    double price, quality;
    for (size_t i = 0; i < n; i++)
    {
        cin >> s;
        cin >> price >> quality;
        if(GetPriceQualityRatio(price, quality) > max)
        {
            max = GetPriceQualityRatio(price, quality);
            maxi = s;
        }
    }
    cout << maxi;
}

double GetPriceQualityRatio(double price, double quality)
{
    return quality / price;
}