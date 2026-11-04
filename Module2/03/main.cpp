#include <iostream>
#include <string>
#include <vector>

struct Persoon
{
    std::string naam;
    int leeftijd;
};

std::vector<Persoon> Personen;

int main()
{
    Persoon persoon1{"Niklas", 19};
    Persoon persoon2{"Oscar", 17};
    Persoon persoon3{"Jakub", 18};

    Personen.push_back(persoon1);
    Personen.push_back(persoon2);
    Personen.push_back(persoon3);

    for (int i = 0; i < Personen.size(); i++)
    {
        std::cout << "=================================\n";
        std::cout << Personen[i].naam << "\n";
        std::cout << Personen[i].leeftijd << "\n";
        std::cout << "=================================\n";
    }
}