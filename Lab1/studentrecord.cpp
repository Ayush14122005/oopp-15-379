#include <iostream>
using namespace std;
class student{
     string name;
    int roll;
    int marks;
    public:
    void input(){
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter roll no:";
        cin>>roll;
        cout<<"Enter marks";
        cin>>marks;
    }
    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No.:"<<roll<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
 int main(){
        student s1;
        s1.input();
        s1.show();
        return 0;
    }