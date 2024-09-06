#include <iostream>
using namespace std;

const float PI = 3.1416;

class Shape
{
    private:
    string color;

    public:
    Shape(string c) : color(c) {}

    virtual void display()
    {
        cout << "Color: " << color << endl;
    }
};

class Circle : public Shape
{
    private:
    float radius;

    public:
    Circle(string c, float r) :  Shape(c), radius(r) {}

    float area()
    {
        return PI * radius * radius;
    }
    float circumference()
    {
        return 2 * PI * radius;
    }
    void display() override
    {
        Shape::display();
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
        cout << "Circumference: " << circumference() << endl;
    }
};

int main()
{
    Circle c("Red", 5);
    c.display();
    return 0;
}
