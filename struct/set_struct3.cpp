#include <iostream>
using namespace std;

struct Student
{
    string name;
    int groupNumber;
    double averageGrade;
};

void PrintStudents(Student *s)
{   
    for (int i = 0; i < 5; ++i)
    {
        cout << s[i].name << endl;
        cout << s[i].groupNumber << endl;
        cout << s[i].averageGrade << endl;
    }
}

void PrintStudents2(Student *s)
{   
    for (int l = 0; l < 5; ++l)
    {
        cout << s[l].name << endl;
        cout << s[l].groupNumber << endl;
        cout << s[l].averageGrade << endl;
    }

    double arr[5] = {};
    for (int j = 0; j < 5; j++)
    {
        arr[j] = s[j].averageGrade;
    }

    double buffer{};
    for (int k = 0; k < 5; k++)
    {
        for (int kk = 0; kk < 5; kk++)
        {
            if (arr[kk] < arr[kk + 1])
            {
                buffer = arr[kk];
                arr[kk] = arr[kk + 1];
                arr[kk + 1] = buffer;
            }
        }
    }

    for (int y = 0; y < 5; y++)
    {
        cout << arr[y] << ", ";
    }
}

int main()
{
    Student MGU[] = 
    {
        {"Misha", 101, 4.5},
        {"Ivan", 102, 3.8},
        {"Maria", 103, 4.2},
        {"Petr", 107, 5.0},
        {"Matvey", 105, 5.2}
    };
    
    PrintStudents2(MGU);
    
    return 0;
}