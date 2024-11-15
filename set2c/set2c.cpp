#include <iostream>
using namespace std;

short k = 65;

int main()
{
    for (int i = 1; i <= 5; i += 1)
    {
        for (int j = 1; j <= 5; j += 1)
        {
        }
        for (char k = 65; k <= 69; k += 1)
            {
            cout << (char)k << " ";
            }
        cout << endl;
    }

    return 0;
}