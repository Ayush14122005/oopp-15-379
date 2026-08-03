//  define a class point  with two private paramter show them by help of constructor
#include <bits/stdc++.h>
using namespace std;

class point{
    private:
    int x,y;
    public:
    point(int a,int b){
       x=a;
       y=b;
    }

    point(){
        x=10;
        y=20;
    } 

    void show(){
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main(){
    int a,b;
    cin>>a>>b;
    point c(a,b);
    c.show();
    point d;
    d.show();

}