#include<iostream>
using namespace std;

class Complex
{
    private:
    int real, imag;
    
    public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
        
        void print()
        {
            cout<< real<< "+"<< imag<<"i"<< endl;
        }
        Complex operator +(Complex other)
        {
            Complex temp;
            temp.real = real + other.real;
            temp.imag = imag + other.imag;
            return temp;
        }
    
};

int main() 
{
    Complex c1(3, 4);
    Complex c2(2, 1);
    Complex c3;
    
    c3 = c1 + c2;
    
    c3.print();
    
    return 0;
}
