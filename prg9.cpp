#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    void getData()
    {
        cout << "Enter roll number: ";
        cin >> roll;
    }

    void display()
    {
        cout << "Roll Number: " << roll << endl;
    }
};

int main()
{
    Student *ptr;

    ptr = new Student;

    cout << "Enter details of one student:" << endl;
    ptr->getData();

    cout << "\nStudent Details:" << endl;
    ptr->display();

    delete ptr;

    Student *arr = new Student[3];

    cout << "\nEnter details of 3 students:" << endl;

    for(int i = 0; i < 3; i++)
    {
        arr[i].getData();
    }

    cout << "\nStudent Records:" << endl;

    for(int i = 0; i < 3; i++)
    {
        arr[i].display();
    }

    delete[] arr;

    return 0;
}