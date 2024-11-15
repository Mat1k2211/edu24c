#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int array[size];
    cout << "Введите " << size << " чисел:" << endl;
    int i = 0;
    while (i < size)
    {
        cin >> array[i];
        i++;
    }
    
    cout << "Введённые числа:";
    i = 0;
    while (i < size)
    {
        cout << array[i] << " ";
        i++;
    }
    
    cout << endl;

    return 0;
}