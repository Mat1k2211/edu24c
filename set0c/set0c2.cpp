#include <iostream>
using namespace std;

int k = 0;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        k = k + 1;
        for (int j = 1; j <= k; j++)
        {
            
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}