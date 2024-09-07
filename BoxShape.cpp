#include <iostream>
using namespace std;

class Box
{
    private:
    double height, length, width;

    public:
    Box(double h, double l, double w) : height(h), length(l), width(w) {}

    friend void printDimension(Box &b);
    friend class volumecalculator;
};

class volumecalculator
{
    public:
    void printVolume(Box &b)
    {
        double volume = b.height * b.length * b.width;
        cout << "Volume: " << volume << endl;
    }
};

void printDimension(Box &b)
{
    cout << "Height: " << b.height << endl;
    cout << "Length: " << b.length << endl;
    cout << "Width: " << b.width << endl;
}

int main()
{
    Box b(10, 20, 30);
    volumecalculator fc;
    printDimension(b);
    fc.printVolume(b);

    return 0;
}
