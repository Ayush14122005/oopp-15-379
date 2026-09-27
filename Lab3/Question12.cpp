#include <iostream>
using namespace std;

double area(double radius){
    return 3.14* radius *radius;
}
double area(double length, double width){
    return length*width;
}
int area(int side){
    return side*side;
}
double area(double base,double height,bool triangle){
    return 0.5*base*height;
}


int main(){
    cout<<"Area of Circle="<<area(5.0)<<endl;
    cout<<"Area of Rectangle="<<area(10.0,5.0)<<endl;
    cout<<"Area of Square="<<area(4)<<endl;
    cout<<"Area of Triangle="<<area(6.0,4.0,true)<<endl;
    return 0;
}
