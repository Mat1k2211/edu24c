#include <iostream>
using namespace std;

class A
{
public:
    int B;
    int summa(int j, int i)
        {
            return j + i + prostoF();
        }
private:
    int prostoF()
    {
        return 2 + 2;
    }
protected:
};

int main()
{
    A d; d.B = 5;
    cout << d.summa(3, 5) << endl;
return 0;
}