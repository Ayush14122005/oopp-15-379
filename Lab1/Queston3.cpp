#include <iostream>
using namespace std;
class point{
    int x,y;
    public:
    void input(){
        cout<<"Enter X coordinate";
        cin>>x;
        cout<<"Enter y coordinate";
        cin>>y;
        cout<<endl;
    }
    void show(){
        cout<<"X="<<x<<","<<"Y="<<y<<endl;
    }
};

int main(){
    point p1,p2;
    p1.input();
    p2.input();
    p1.show();
    p2.show();
    return 0;
}