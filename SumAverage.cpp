// SumAverage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float i, j, k;
    std::cout << "Enter three numbers. You can use integers or decimal numbers. Do not enter any letters or symbols." << '\n';
    std::cout << "Enter first number: ";
    std::cin >> i;
    std::cout << "Enter second number: ";
    std::cin >> j;
    std::cout << "Enter third number: ";
    std::cin >> k;
    float sum = i + j + k;
    std::cout << "Sum is: " << sum << '\n';
    std::cout << "Average is: " << sum / 3 << '\n';

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
