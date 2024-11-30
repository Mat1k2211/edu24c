#include <iostream>
using namespace std;

struct Employee
{
    string name;
    string id_pc;
    string office;
    long long int tel;
    string Email;
    
};

int main()
{
    Employee Matvey {"Matvey", "oscar-pc10", "The Palace of Children's creativity 4", 79870130394, "soloncovmatvey@gmail.com"};
    cout << Matvey.name << endl;
    cout << Matvey.id_pc << endl;
    cout << Matvey.office << endl;
    cout << Matvey.tel << endl;
    cout << Matvey.Email << endl;
    return 0;
}