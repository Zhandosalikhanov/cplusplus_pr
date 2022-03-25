#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    int ID;
    string Name;
    double Grade;
    void St(void);
};

class Subject{
public:
    int ID;
    string Name;
    double nStudents;
    void Sb(void);
};

void Student :: St(void)
{
    cin >> ID >> Name >> Grade;
}

void Subject :: Sb(void)
{
    cin >> ID >> Name >> nStudents;
}

int main()
{
    int n;
    cin >> n;
    Student st[1000];
    Subject sb[1000];
    int i1 = 0;

    for (size_t i = 0; i < n; i++)
    {
        sb[i].Sb();
        for (size_t j = 0; j < sb[i].nStudents; j++)
        {
            st[i1].St();
            i1++;
        }
        
    }
    

    string name;
    cin >> name;

    int a, b;
    cin >> a >> b;

    i1 = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < sb[i].nStudents; j++)
        {
            if(st[i1].Name == name && st[i1].Grade >= a && st[i1].Grade <= b)
            {
                cout << sb[i].ID << " " << sb[i].Name << endl;
            }
            i1++;
        }
        
    }
    
}