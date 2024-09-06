#include <iostream>
using namespace std;

class Student
{
    private:
        string name;
        int rollNUmber;
        float marks[5];
        float totalmarks;
    
    public:
        Student(string n, int r, float m[]) : name(n), rollNUmber(r)
        {
            totalmarks = 0;
            for(int i = 0; i < 5; i++)
            {
                marks[i] = m[i];
            }
        }
    void calculateTotalMarks()
    {
        for(int i = 0; i < 5; i++)
        {
            totalmarks += marks[i];
        }
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNUmber << endl;
        cout<< "Marks: "<<endl;
        for(int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total Marks: " << totalmarks << endl;
    }
    float calculatePercentage()
    {
        return (totalmarks / 500) * 100;
    }
};

int main()
{
    float marks[] = {80, 90, 75, 85, 95};
    float marks2[] = {70, 80, 75, 85,80};
    float marks3[] = {60, 70, 75, 85,97};

    Student s1("John Doe", 101, marks);
    Student s2("Jane Smith", 102, marks2);
    Student s3("Bob Johnson", 103, marks3);

    s1.calculateTotalMarks();
    s2.calculateTotalMarks();
    s3.calculateTotalMarks();

    s1.display();
    cout << "Percentage: " << s1.calculatePercentage() << "%" << endl;
    s2.display();
    cout << "Percentage: " << s2.calculatePercentage() << "%" << endl;
    s3.display();
    cout << "Percentage: " << s3.calculatePercentage() << "%" << endl;
    
    return 0;
}


