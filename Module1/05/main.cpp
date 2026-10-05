// #include <iostream> brons
// #include <string>

// int age; 
// int main()
// {
//     std::cout << "Age:";
//     std::cin >> age;
//     if(age >= 18)
//     {
//         std::cout << "je mag alkohol drinken in NL\n";
//     }
//     else
//     {
//         std::cout << "blijf weg van de alkohol!\n";
//     }
// }
#include <iostream>
#include <string>
#include <algorithm>

double cijfer; 
int main()
{
    std::cout << "Cijfer:";
    std::cin >> cijfer;
    cijfer = std::clamp(cijfer, 1.0, 10.0);
    if(cijfer >= 8)
    {
        std::cout << "Goede Cijfer!\n";
    }
    else if (cijfer >= 5.5)
    {
        std::cout << "Voldoende Cijfer\n";
    }
    else
    {
        std::cout << "onvoldoende\n";
    }
    std::cout << cijfer;
}
