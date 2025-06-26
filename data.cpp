#include <iostream>
using namespace std;

int main()
{
string name;
    int age;
    double height;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height: ";
    cin >> height;

    cout << "Hello, " << name << "! You are " << age << " years old and " 
         << height << " feet tall." << "\n";
    return 0;   
}