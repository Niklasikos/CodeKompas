#include <iostream>
#include <string>
#include <vector>

void MainMenu();
void Add();
void ShowAll();
void Delete();
void Spacer();

std::vector<std::string> boodschappenlijst;

int selection;

int main()
{
    while (selection != 4)
    {
        MainMenu();
        // Spacer();
    }
    std::cout << "goodbye \n";
    return 0;
}

void MainMenu()
{
    std::cin.clear();
    std::cout << "=================================\n";
    std::cout << "1: boodschappen toevoegen\n";
    std::cout << "2: boodschappen tonen\n";
    std::cout << "3: boodschappen verwijdern\n";
    std::cout << "=================================\n";
    std::cout << "Keuze: ";

    if (!(std::cin >> selection))
    {
        std::cout << "geen geldig input, gebruik een getaal\n";
        std::cin.clear(); // reseted error state
        std::cin.ignore(); // removes \n from buffah    
        return;
    }

    switch (selection)
    {
    case 1:
        Add();
        break;
    case 2:
        ShowAll();
        break;

    case 3:
        Delete();
        break;

    default:
        std::cout << "Selection not in List\n";
        break;
    }
}

void Add()
{
    std::cin.ignore(); // buffer clearen
    std::string boodschappentoAdd;
    std::cout << "=================================\n";
    std::cout << "Boodschappen om toe te voegen: \n";
    std::getline(std::cin, boodschappentoAdd);
    if (boodschappentoAdd.empty())
    {
        std::cout << "Niks ingevoert\n";
        std::cout << "=================================\n";
        return;
    }
    boodschappenlijst.push_back(boodschappentoAdd);
    std::cout << "=================================\n";
}

void ShowAll()
{
    if (boodschappenlijst.empty())
    {
        std::cout << "List is empty \n";
        return;
    }

    std::cout << "=================================\n";
    for (int i = 0; i < boodschappenlijst.size(); i++)
    {
        std::cout << i + 1 << ": " << boodschappenlijst[i] << "\n";
    }
    std::cout << "=================================\n";
}

void Delete()
{
    int deleteSelection = 0;
    std::cin.ignore();
    ShowAll();
    if (boodschappenlijst.empty())
    {
        return;
    }
    std::cout << "Select Number to delete: 1-" << boodschappenlijst.size() << " (0 for nothing)\n";
    if (!(std::cin >> deleteSelection) || deleteSelection > boodschappenlijst.size() || deleteSelection < 0)
    {
        std::cout << "geen geldig input, gebruik een geldig getaal\n";
        std::cin.clear(); // reseted error state
        std::cin.ignore(); // removes \n from buffah    
        return;
    }
    if (deleteSelection == 0)
    {
        return;
    }
    boodschappenlijst.erase(boodschappenlijst.begin() + deleteSelection - 1);
}

// void Spacer()
// {
//     std::cout << "\n";
//     std::cout << "\n";
//     std::cout << "\n";
//     std::cout << "\n";
//     std::cout << "\n";
//     std::cout << "\n";
//     std::cout << "\n";
//     std::cout << "\n";
//     std::cout << "\n";
//     std::cout << "\n";
// }