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

    cout << "Name: " << Matvey.name << endl;
    cout << "Id pc: " << Matvey.id_pc << endl;
    cout << "Office: " << Matvey.office << endl;
    cout << "Tel: " << Matvey.tel << endl;
    cout << "Email: " << Matvey.Email << endl;
    
    return 0;
}