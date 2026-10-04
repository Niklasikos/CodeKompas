#include <iostream>
#include <string>

int main()
{
    std::string naam;
    int age;
    
    std::cout << "Name:";
    std::cin >> naam;
    std::cout << "Hello " + naam + "\n";

    std::cout << "Age:";
    std::cin >> age;
    std::cout << "Age: " << age << "\n";

    std::cout << "Youre gonna be 100 by " << (2026 + (100 - age)) << "\n";
    return 0;
}