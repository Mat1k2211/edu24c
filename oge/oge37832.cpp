#include <iostream>
using namespace std;

int s{};
int k{};

int main()
{
    cout << "Введите количество чисел:";
    cin >> s;
    int arr[s] = {};

    int c = 0;

    for (int i = 1; i <= s; i++)
    {
        cout << "Введи " << i << " число: ";
        cin >> c;
        arr[i] = c;
    }

    for (int j = 1; j <= s; j++)
    {
        if (arr[j] % 4 == 0)
        {
            k += 1;
        }
        
    }

    cout << k << endl;
    return 0;
}