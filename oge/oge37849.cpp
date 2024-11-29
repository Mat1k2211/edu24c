#include <iostream>
using namespace std;

int main()
{
bool b = false;
int car = 0;
int maxx = 300;
cout << "Введите количество машин: ";
cin >> car;
int speed[car] = {};
int c = 0;
for (int i = 1; i <= car; i++)
{
    cout << "Введи " << i << " скорость: ";
    cin >> speed[i];
    if (speed[i] < 1)
    {
        speed[i] = 0;
        cout << "Это скорость слишком маленькая!" << endl;
    }
    
}

for (int j = 1; j <= car; j++)
{
    if (speed[j] < maxx)
    {
        maxx = speed[j];
    }
    if (speed[j] > 80)
    {
        b = true;
    }
    
}

cout << maxx << endl;
if (b == true)
{
    cout << "YES" << endl;
}
else
{
    cout << "NO" << endl;
}
return 0;

}