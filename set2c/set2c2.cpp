#include <iostream>
using namespace std;

char k = 'A';
int main()
{
    for (int i = 1; i <= 5; i += 1)
    {   
        for (char j = 0; j < 5; j++)
            {
            cout << k << " ";
            k++;
            }
        cout << endl;
    }

    return 0;
}