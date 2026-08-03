//  define a class point  with two private paramter show them by help of constructor
#include <bits/stdc++.h>
using namespace std;

class point{
    private:
    int x,y;
    public:
    point() : x{0} , y{0} {
    cout<<"Default constructor"<<endl;}
    point(int p, int q) : x{p},y{q}{
   cout<<"Parametrized constructor"<<endl;
    }
    // point(int a,int b){
    //    x=a;
    //    y=b;
    // }

    // point(){
    //     x=10;
    //     y=20;
    // } 
    point add(point q){
        point r;
        r.x=x+q.x;
        r.y=y+q.y;
        return r;
    }

    void show(){
        cout<<x<<","<<y<<endl;
        
    }
};
int main(){
    // int a,b;
    // cin>>a>>b;
    // point p(a,b);
    // p.show();
    // point q;
    // q.show();
    // point r= p.add(q);
    // r.show();
     point p(5,10),q(20,50);
     p.show();
     q.show();
     point r =p.add(q);
     r.show();
     return 0;

}