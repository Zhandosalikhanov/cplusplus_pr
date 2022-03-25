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
    cout << "Enter the student ID: ";
    cin >> ID;
    cout << "Enter the Name of the student: ";
    cin >> Name;
    cout << "Enter the grade the student has: ";
    cin >> Grade;
}

void Subject :: Sb(void)
{
    cout << "Enter subject's ID: ";
    cin >> ID;
    cout << "Enter the name of the subject: ";
    cin >> Name;
    cout << "Enter the number of students studiying " << Name << " : ";
    cin >> nStudents;
}

int main()
{
    int n;
    cout << "Enter how many subjects would be there" << endl;
    cin >> n;
    Student st[1000];
    Subject sb[1000];
    int i1 = 0;

    for (size_t i = 0; i < n; i++)
    {
        cout << "Enter subject details:" << endl;
        sb[i].Sb();
        for (size_t j = 0; j < sb[i].nStudents; j++)
        {
            cout << "Enter student details:" << endl;
            st[i1].St();
            i1++;
        }
        
    }
    
    cout << endl << "Enter the student's name you want to find:" << endl;
    string name;
    cin >> name;

    cout << endl << "Ennter the range of the grade:" << endl;
    int a, b;
    cin >> a >> b;

    i1 = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < sb[i].nStudents; j++)
        {
            if(st[i1].Name == name && st[i1].Grade >= a && st[i1].Grade <= b)
            {
                cout << endl << name << "has grades in between " 
                    << a << " and " << b << " in the next disciplines" 
                    << endl << sb[i].ID << " " << sb[i].Name << endl;
            }
            i1++;
        }
        
    }
    
}