#include<iostream>
using namespace std;

class Book
{
    private:
        string title;
        string author;
        int pages;
        float price;

    public:
        Book(string t, string a, int p, float pr) : title(t), author(a), pages(p), price(pr) {}

        void display()
        {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Pages: " << pages << endl;
            cout << "Price: " << price << endl;
        }

        void applyDiscount(float discount)
        {
            price -= price*discount/100;
        }

};

int main()
{
    Book b1("The Great Gatsby", "F. Scott Fitzgerald", 218, 12.99);
    b1.display();
    b1.applyDiscount(10);
    b1.display();
    return 0;
}

