#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    int serial;
    int age;
    string name;
    string gf;

    void gfa()
    {
        cout << "chatting with gf";
    }

public:
    // default constructor
    Student()
    {
        cout << "\ndefault constructor called";
    }

    void setGf(string gf)
    {
        this->gf = gf;
    }

    string getGf()
    {
        return this->gf;
    }
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

    // parametrized constructor
    Student(int serial, int age, string name, string gf)
    {
        this->serial = serial;
        this->age = age;
        this->name = name;
        this->gf = gf;
    }

    // creating destructor
    ~Student()
    {
        cout << "\ndestructor called";
    }
};

int main()
{
    Student A(1, 2, "acg", "pani");
    // A.gf();-------------------------------------> pvt memnber hence inaccessible;
    // A.name;-------------------------------------> pvt memnber hence inaccessible;
    cout << A.getGf() << " Old Gf " << endl;
    A.setGf("rani");
    cout << A.getGf() << " New Gf ";

    return 0;
}