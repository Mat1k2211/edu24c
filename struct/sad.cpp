#include <iostream>
using namespace std;

union ass
{
    int A;
    char text[20];
};

ass Student;

int main()
{
    cout << sizeof(Student);
    return 0;
}