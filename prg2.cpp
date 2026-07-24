#include <iostream>
using namespace std;
void show(int x, int y)
{
    cout << "x = " << x << ", y = " << y << endl;
}
void swapByValue(int x, int y)
{
    int z= x;
    x = y;
    y =z;

    cout << "After swapping Value ";
    show(x, y);
}
void swapByReference(int &x, int &y)
{
    int z = x;
    x = y;
    y =z;
}
void swapByAddress(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y =z;
}
int main()
{
    int x, y;
cout << "Enter two numbers: ";
    cin >> x >> y;
    cout <<"Call by Value"<< endl;
    cout <<"Before swap:";
    show(x, y);
swapByValue(x, y);
cout <<"After swap:";
    show(x, y);
    cout <<"Call by Reference"<< endl;
    cout <<"Before swap:";
    show(x, y);
swapByReference(x, y);
cout <<"After swap:";
    show(x, y);
    cout <<"Call by Address"<< endl;
    cout <<"Before swap:";
    show(x, y);
swapByAddress(&x, &y);
cout <<"After swap:";
    show(x, y);
return 0;
}