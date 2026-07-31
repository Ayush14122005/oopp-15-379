#include <iostream>
using namespace std;
class Student{
    private:
    int RollNo;
    string Name;
    float marks;
    public:
    void input(){
    cout << "Enter Roll Number: ";
        cin >> RollNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, Name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display(){
        cout<<"Student Details:"<<endl;
        cout<<"Name:"<<Name<<endl;
        cout<<"Roll Number:"<<RollNo<<endl;
        cout<<"Marks:"<<marks;
    }

};

int main() {
    Student s1;

    s1.input();
    s1.display();
}
