#include <iostream>
using namespace std;
class Student{
    string name;
    int roll;
    string branch;
    public:
    Student(string n,int r,string b):name{n},roll{r},branch{b}{}
    void show(){
         cout<<"Name:"<<name<<endl;
        cout<<"Roll No.:"<<roll<<endl;
        cout<<"Branch:"<<branch<<endl;
    }
};
int main(){
Student s1("Ayush",379,"CSE15");
s1.show();}