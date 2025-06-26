#include <iostream>
using namespace std;

int main ()
{
    int MyNum;
    cout << "What is your favorite number?: ";
    cin >> MyNum;
    if (MyNum % 2 == 0)
    {
        cout << "Your favorite number is even." << endl;
    }
    else
    {
        cout << "Your favorite number is odd." << endl;
    }
    return 0;
}