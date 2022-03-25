#include<bits/stdc++.h>
using namespace std;

void wait(int sec);                 // simple wait function

int n, k = 1, c;                    // n - size of the matrix, k - sign of the determinant, c - diagonal elements index
double acurr;                       // acurracy of converting
vector< vector<double> > v;         // matrix container
bool error = false;                 // unable to convert to qoutient identifier

void writer_drobniy();              // printer of the matrix in quoutient
void writer();                      // printer of the matrix in decimal
void reader();                      // reader of the input
void output();                      // decimal output
void output_drobniy();              // quoutient output
void eliminator(int i);             // substracter to make echelon form
void sorter(int j);                 // sorting by zeros in row
bool comp
(vector<double> v1,                 // comparator for sorting by zeros
vector<double> v2);
bool next(int j);                   // check if the columns are already in echelon form
double determinant();               // simple multiplicator of diagonal elements
bool isInt(double x);               // check is the number int or similar to int with 0.000001 decimal acurracy
pair< int, int >
converter(double x);                // convert from decimal to quoutient

int main()
{
    char x;
    cout << "Enter the size of n x n matrix:" << endl;
    cin >> n;
    cout << "Enter the matrix:" << endl;
    reader();
    cout << endl << "Express answer in decimal or qoutient? Type d or q" << endl
        << "If the numbers are too big, we recomend you to use decimal type" << endl;
    do
    {
        cin >> x;
        if(x == 'd' || x == 'q') break;

        if(x != 'd' || x != 'q')
        cout << "Invalid input" << endl;

    } while (x != 'q' || x != 'd');
    
    if(x == 'q')
    {
        cout << "Enter at what precision numbers should be converted" << endl;
        cin >> acurr;
    }

    cout << endl << endl << "The solution is:" << endl;

    if(x == 'd')
    output();
    else
    output_drobniy();

    if(error)
    cout << endl << endl << "Some numbers are not converted to quoutient due to unknown error."
        << endl << "Please Help :)";
}

void wait(int sec)
{
    clock_t endwait;
    endwait = clock() + sec * CLK_TCK;
    while (clock() < endwait) {}
}

void output()
{
    for (size_t j = 1; j < n; j++)
    {
        while (next(j))
            j++;
        
        if(j >= n)
        {
            cout << endl << "Your matrix is already in echelon form." << endl;
            break;
        }

        if(v[j - 1][j - 1] == 0)
        sorter(j - 1);
        cout << endl << "Reducing";
        for (size_t i = 0; i < 3; i++)
        {
            wait(1);
            cout << ".";
        }

        cout << endl << "Eliminate elements in the " << j << " column under the " << j << " element" << endl;
        eliminator(j - 1);
        writer();
    }

    cout << endl << "The determinant is: " << determinant();
}

void output_drobniy()
{
    for (size_t j = 1; j < n; j++)
    {
        while (next(j))
            j++;
        
        if(j >= n)
        {
            cout << endl << "Your matrix is in echelon form." << endl;
            break;
        }

        if(v[j - 1][j - 1] == 0)
        sorter(j - 1);

        cout << endl << "Reducing";
        for (size_t i = 0; i < 3; i++)
        {
            wait(1);
            cout << ".";
        }

        cout << endl << "Eliminate elements in the " << j << " column under the " << j << " element" << endl;
        eliminator(j - 1);
        writer_drobniy();
    }

    cout << endl << "The determinant is: " << determinant();
}

void reader()
{
    for (size_t i = 0; i < n; i++)
    {
        vector<double> v1;
        for (size_t j = 0; j < n; j++)
        {
            double x;
            cin >> x;
            v1.push_back(x);
        }
        v.push_back(v1);
        v1.clear();
    }
    
}

void writer()
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
        cout << endl;
}

void writer_drobniy()
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(isInt(v[i][j]))
            {
                cout << v[i][j] << " ";
            }else{
                if(converter(v[i][j]).second != 1)
                cout << converter(v[i][j]).first << '/' << converter(v[i][j]).second << " ";
                else{
                    cout << v[i][j] << " ";
                    error = true;
                }
            }
        }
        cout << endl;
    }
    
}

void eliminator(int j1)
{
    double m;
    for (int i = 1 + j1; i < n; i++)
    {   
        m = v[i][j1] / v[j1][j1];
        for (size_t j = j1; j < n; j++)
            v[i][j] -= m * v[j1][j];
        
    }
    
}

double determinant()
{
    double det = 1;
    for (size_t i = 0; i < n; i++)
    {
        det *= v[i][i];
    }
    if(det == 0)
    return 0;

    return det * k;
}

bool next(int j)
{
    int cnt = 0;
    for (size_t i = j; i < n; i++)
        if(v[i][j - 1] == 0) cnt++;

    return cnt == n - j;
}

void sorter(int j)
{
    vector< vector<double> > v1;
    c = j - 1;
    v1 = v;
    sort(v.begin(), v.end(), comp);

    if(v1 != v)
    {
        k *= -1;
        cout << "Interchange" << endl;
        wait(1);
        writer();
    }
}

bool comp(vector<double> v1, vector<double> v2)
{
    int n_of_zeros_v1 = 0;
    int n_of_zeros_v2 = 0;

    for (size_t i = 0; i < n; i++)
    {
        if(v1[i] == 0) n_of_zeros_v1++;
        if(v2[i] == 0) n_of_zeros_v2++;
    }
    
    if(n_of_zeros_v1 == n_of_zeros_v2)
    {
        if((v1[c] != 0 && v2[c] == 0) || (v1[c] == 0 && v2[c] == 0) || (v1[c] != 0 && v2[c] != 0))
        return 1;

        return 0;
    }
    return (n_of_zeros_v1 < n_of_zeros_v2);
}

bool isInt(double x)
{
    return abs(x - int(x)) <= acurr;
}

pair< int, int > converter(double x)
{
    int l = 2;
    while (!isInt(x * l))
    {
        l++;
        if(l > 100000)
        {
            l = 1;
            break;
        }
    }
    
    

    return pair< int, int > (int(l * x), l);
}