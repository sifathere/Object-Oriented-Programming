#include <iostream>
using namespace std;

class Person
{
    protected:
    string name;
    int age;

    public:
    Person(string n, int a) : name(n), age(a) {}

    virtual void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    
};

class Student : public Person
{
    private:
    int studentId;

    public:
    Student(string n, int a, int id) : Person(n, a), studentId(id) {}

    void display() override
    {
        Person::display();
        cout << "Student ID: " << studentId << endl;
    }
};

int main()
{
    Student s("John Doe", 20, 12345);
    s.display();

    return 0;
}


