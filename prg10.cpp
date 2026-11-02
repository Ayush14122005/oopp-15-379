#include <iostream>
#include <memory>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Constructor Called" << endl;
    }

    void display()
    {
        cout << "Student Object Created" << endl;
    }

    ~Student()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    cout << "Using unique_ptr:" << endl;

    unique_ptr<Student> p1(new Student);

    p1->display();

    cout << "\nUsing shared_ptr:" << endl;

    shared_ptr<Student> p2(new Student);

    shared_ptr<Student> p3 = p2;

    p2->display();

    cout << "Reference Count: " << p2.use_count() << endl;

    return 0;
}