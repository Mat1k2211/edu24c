#include <iostream>
using namespace std;

struct Employee
{
    string names;
    long int salary;
    int age;
};

int main()
{
    Employee john {"John", 45000, 36};
    Employee milla {"Milla", 25000};

    cout << john.names << endl;
    cout << milla.names << endl;
    cout << john.salary << endl;
    cout << milla.salary << endl;
    cout << john.age << endl;
    cout << milla.age << endl;

    return 0;
}