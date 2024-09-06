
#include <iostream>
using namespace std;

class Car
{
    private:
        string make;
        string model;
        int year;
        float price;
    
    public:
        Car(string m, string mo, int y, float p) : make(m), model(mo), year(y), price(p) {}

        void display()
        {
            cout << "Make: " << make << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
            cout << "Price: " << price << endl;
        }

        void applyDepreciation(float depreciation)
        {
            price -= price * depreciation / 100;
        }

        bool isAntique()
        {
            const int currentYear = 2024;
            return (currentYear - year) > 25;
        }
};

int main()
{
    Car c1("Toyota", "Camry", 2010, 15000);
    Car c2("Honda", "Civic", 2015, 18000);
    Car c3("Ford", "Mustang", 1993, 25000);

    c1.display();
    cout<<endl;
    c2.display();
    cout<<endl;
    c3.display();
    cout<<endl;

    c1.applyDepreciation(10);
    c2.applyDepreciation(15);
    c3.applyDepreciation(20);

    cout<<"/n After depreciation: "<<endl;
    c1.display();
    cout<<"Is Car1 Antique: " << (c1.isAntique() ? "Yes" : "No") << endl;
    cout<<endl;
    c2.display();
    cout<<"Is Car2 Antique: " << (c2.isAntique() ? "Yes" : "No") << endl;
    cout<<endl;
    c3.display();
    cout<<"Is Car3 Antique: " << (c3.isAntique() ? "Yes" : "No") << endl;
    cout<<endl;

    return 0;
}
