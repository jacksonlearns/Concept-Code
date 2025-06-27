#include <iostream>


int main()
{
    int numbers;
    int Reverse_numbers = 0;
    std::cout << "Numbers: \n";
    std::cin >> numbers;

    while (numbers)//runs until numbers dosen't contain any data
    {
        Reverse_numbers = Reverse_numbers * 10 + numbers % 10;//adds the last digit of numbers to renumbers
        std::cout << "Reverse_numbers: " << Reverse_numbers << "\n";
        numbers /= 10;//removes the last digit from numbers
    }
    std::cout << "Reversed: " << Reverse_numbers << "\n";
    return 0;
}