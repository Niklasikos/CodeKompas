#include <iostream>
#include <string>

std::string naam;

int main()
{
    std::cout << "Volledige naam?\n";
    std::cin >> naam;
    int space = naam.find(" ");
    std::cout << naam[0] << " " << naam[space+1];
    return 0;
}