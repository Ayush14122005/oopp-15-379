#include <iostream>
using namespace std;
class comp{
    int real,img;
    public:
    comp(int r=0,int i=0):real{r},img{i}{}

    void show(){
        cout<<"complex Number is:"<<endl;
        cout<<real<<" ,"<<img<<endl;
    }
    //  comp operator +(comp c){
    //  return comp(this->real+c.real,this->img+c.img);
    //  }

    friend  comp operator +(comp c,int d);
    };

//  comp operator +(comp c,comp d){
//     return comp(c.real+d.real,c.img+d.img);
//  }
comp operator +(comp c,int d){
    return comp(c.real+d,c.img+d);
}

int main(){
    comp c1(5,20);
    comp c2(5,9);
    c1.show();
    c2.show();
    // comp c3=c1+c2;
    // c3.show();
    comp c3=c1+5;
    c3.show();

}