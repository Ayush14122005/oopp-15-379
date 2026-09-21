#include <iostream>
using namespace std;
class student{
     string name;
    int roll;
    string branch;
    public:
    void input(){
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter roll no:";
        cin>>roll;
        cout<<"Enter branch";
        cin>>branch;
    }
    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No.:"<<roll<<endl;
        cout<<"Branch:"<<branch<<endl;
    }
};
 int main(){
        student s1;
        s1.input();
        s1.show();
        return 0;
    }