#include <iostream>
using namespace std;

short k = 1;

int main()
{
    for (int i = 1; i <= 5; i += 1)
    {
        for (int j = 1; j <= 5; j += 1)
        {
            cout << k << " ";
            k += 1;
        }

        cout << endl;
    }

    return 0;
}