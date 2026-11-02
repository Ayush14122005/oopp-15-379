#include <iostream>
using namespace std;

class Addition
{
public:

    int add(int a, int b)
    {
        return a + b;
    }

    float add(float a, float b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Addition obj;

    cout << "Integer Addition: "
         << obj.add(10, 20) << endl;

    cout << "Float Addition: "
         << obj.add(2.5f, 3.5f) << endl;

    cout << "Double Addition: "
         << obj.add(5.25, 4.75) << endl;

    return 0;
}