#include <iostream>
using namespace std;

// Inline Function
inline int add(int a, int b)
{
    return  a+b;
}

// Default Argument Function
int sub(int a=0, int b = 0)
{
    return a - b;
}

// Function Overloading
int multiply(int a, int b)
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}

int main()
{
    cout << "Addition=" << add(5,6) << endl;

    cout << "subtract=" << sub(5) << endl;

    cout << "subtract=" << sub(30,20) << endl;

    cout << "Multiply Integers = " << multiply(5,4) << endl;

    cout << "Multiply Doubles = " << multiply(5.5,4.2) << endl;

    return 0;
}