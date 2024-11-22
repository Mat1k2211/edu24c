#include <iostream>
using namespace std;

int main()
{
int size = 0;
int number = 0;
int maxx = 0;
cout << "Введите количество чисел:";
cin >> size;
int array[size] = {};
int c = 0;
for (int i = 1; i <= size; i++)
{
    cout << "Введи " << i << " число: ";
    cin >> array[i];
}

for (int j = 0; j < size; j++)
{
    if (array[j] % 5 == 0)
    {
        if (array[j] > maxx)
        {
            maxx = array[j];
        }
        
    }
    
}

cout << maxx << endl;
return 0;

}