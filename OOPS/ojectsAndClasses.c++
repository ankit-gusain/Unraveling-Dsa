#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    // attributes

    int serial;
    int age;
    string name;

    // methods/ behaviour
    void Study()
    {
        cout << this->name << "\nstudent studying";
    }
    void Bunk()
    {
        cout << this->name << "\nstudent bunking";
    }
    void play()
    {
        cout << this->name << "\nstudent playing";
    }

    // default constructor
    Student()
    {
        cout << "\ndefault constructor called";
    }

    // parametrized constructor
    Student(int serial, int age, string name)
    {
        this->serial = serial;
        this->age = age;
        this->name = name;
    }

    // copy constructor
    Student(const Student &srcObj) // here srcObj is being reffered to A
    {
        this->serial = srcObj.serial;
        this->age = srcObj.age;
        this->name = srcObj.name;
    }

    // creating destructor
    ~Student()
    {
        cout << "\ndestructor called";
    }
};

int main()
{
    /*
    creating object like this is obselete and is not a good practice so we use the parametrized const...
    Student A;
    A.serial = 1;
    A.name = "amar";
    A.age = 20;
    */

    /*

    Student A(1, 21, "Ankit");
    cout<<A.name;

    */
   
    Student A(1, 21, "Anni");
    Student C = A;

    cout << A.name << "of obj A" << endl;
    cout << C.name << "of obj C" << endl;
    return 0;
}