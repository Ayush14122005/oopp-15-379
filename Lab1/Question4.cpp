#include <iostream>
using namespace std;
class time{
    int hh,mm,ss;
    public:
    time(int hh, int mm, int ss):hh{hh},mm{mm},ss{ss}{}
    void show(){
        cout<<hh<<","<<mm<<","<<ss<<endl;
    }
};
int main(){
    time T1(9,45,14);
    T1.show();
    return 0;
}