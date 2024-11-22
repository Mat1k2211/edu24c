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

        if (c < 30000)
        {
            arr[i] = c;
        }
        else
            cout << "Это число слишком большое!" << endl;
    }

    for (int j = 0; j < s; j++)
    {
        if (arr[j] % 4 == 0)
        {
            k += 1;
        }
    }

    cout << k << endl;
    return 0;
}