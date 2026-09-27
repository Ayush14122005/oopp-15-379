#include <iostream>
using namespace std;
class time{
    int hh,mm,ss;
    public:
    void input();
    void show();
   
};
void time ::input(){
    cout<<"Enter hour:"<<endl;
    cin>>hh;
    cout<<"Enter minute:"<<endl;
    cin>>mm;
    cout<<"Enter second:"<<endl;
    cin>>ss;

} 
void time ::show(){
    cout<<"Time:-"<<endl;
    cout<<hh<<":"<<mm<<":"<<ss<<endl;
}
int main(){
    time T1;
    // T1.input();
    T1.show();
    return 0;
}