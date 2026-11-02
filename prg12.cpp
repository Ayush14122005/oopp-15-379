#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:

    void getData()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator + (Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    Complex operator - ()
    {
        Complex temp;

        temp.real = -real;
        temp.imag = -imag;

        return temp;
    }
};

int main()
{
    Complex c1, c2, c3, c4;

    cout << "Enter first complex number:" << endl;
    c1.getData();

    cout << "\nEnter second complex number:" << endl;
    c2.getData();

    c3 = c1 + c2;

    cout << "\nAddition: ";
    c3.display();

    c4 = -c1;

    cout << "Unary Minus: ";
    c4.display();

    return 0;
}