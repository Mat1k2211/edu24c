#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int array[size];
    cout << "Введите " << size << " чисел:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Введённые числа:";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}