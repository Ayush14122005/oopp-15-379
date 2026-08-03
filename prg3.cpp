#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b = 10) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {

    return a / b;
}

int main() {
    int a ,b;
    cin>>a>>b;
    cout << "Addition: " << add(a, b) << endl;
 cout << "Subtraction: " << subtract(a) << endl;
    cout << "Subtraction with two arguments: " << subtract(a, b) << endl;
 cout << " Multiplication: "<< multiply(a, b) << endl;
cout << " Division: "<< divide(a, b) << endl;
 return 0;
}
