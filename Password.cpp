#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class PasswordGenerator
{
    private:
        int length;
        string characters;

    public:
        PasswordGenerator(int len) : length(len)
        {
            characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=";
        }

        string generate()
        {
            string password = "";
            for(int i = 0; i < length; i++)
            {
                password += characters[rand() % characters.length()];
            }
            return password;
        }

        void displayPassword()
        {
            cout << "Generated Password: " << generate() << endl;
        }
};

int main()
{
    srand(time(NULL));  

    int length;
    cout << "Enter the desired password length: ";
    cin >> length;

    PasswordGenerator generator(length);
    generator.displayPassword();

    return 0;
}
