#include <iostream>
#include <string>

int main()
{
    int getal;
    std::cout << "tafel?\n";
    std::cin >> getal;
    for (int i = 0; i <= 10; i++)
    {
        std::cout << i << "*" << getal << " = " << i * getal << "\n";
    }
    return 1;
}