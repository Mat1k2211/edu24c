#include <iostream>
using namespace std;

int main()
{
int size = 0;
int number = 0;
int minn = 30000;
cout << "Введите количество чисел:";
cin >> size;
int arr[size] = {};
int c = 0;
for (int i = 1; i <= size; i++)
{
    cout << "Введи " << i << " число: ";
    cin >> arr[i];
}

for (int j = 1; j <= size; j++)
{
    if (arr[j] % 3 == 0)
    {
        if (arr[j] < minn)
        {
            minn = arr[j];
        }
        
    }
    
}

cout << minn << endl;
return 0;

}