#include <iostream>
#include <string>

void Visitekaart(std::string name, int leeftijd, std::string favgame);

int main()
{
    Visitekaart("Niklas", 19, "PvZGW2");
    return 0;
}

void Visitekaart(std::string name, int leeftijd, std::string favgame)
{
    std::cout << "********************\n";
    std::cout << "* "+ name + "           *\n";
    std::cout << "* " << leeftijd << "               *\n";
    std::cout << "* "+ favgame + "           *\n";
    std::cout << "********************\n";
}