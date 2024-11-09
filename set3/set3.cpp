#include <iostream>
using namespace std;

int cels = 0;

int main()
{
    cout << "Celsius value: ";
    cin >> cels;
    float faren = cels * 1.8 + 32;
    cout << cels << " degress Celsius is " << faren << " degress Fahrenheit" << endl;
    
     return 0;
}
