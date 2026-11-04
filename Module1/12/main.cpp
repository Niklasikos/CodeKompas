#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void Menu();
void Add();
void Show();
void ShowStats();

bool onQuit = false;

std::vector<double> Cijfers;

int main()
{
    while (!onQuit)
    {
        Menu();
    }
    return 0;
}

void Menu()
{
    int choice;
    std::cout << "Menu=Options=1-4======\n";
    std::cout << "1: Cijfer toevoegen\n";
    std::cout << "2: Cijfers tonen\n";
    std::cout << "3: Cijfer Statistics\n";
    std::cout << "4: Quit\n";
    std::cout << "======================\n";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        Add();
        break;

    case 2:
        Show();
        break;

    case 3:
        ShowStats();
        break;

    case 4:
        std::cout << "Goodbye";
        onQuit = true;
        break;

    default:
        std::cout << "======================\n";
        std::cout << "Option not in Selection\n";
        std::cout << "======================\n";
        Menu();
        break;
    }
}

void Add()
{
    double cijferToAdd;
    std::cout << "======================\n";
    std::cout << "Cijfer(1.0-10.0):";
    std::cin >> cijferToAdd;
    cijferToAdd = std::clamp(cijferToAdd, 1.0, 10.0);
    Cijfers.push_back(cijferToAdd);
    std::cout << "======================\n";
}

void Show()
{
    if (Cijfers.empty())
    {
        std::cout << "======================\n";
        std::cout << "geen cijfers\n";
        std::cout << "======================\n";
        return;
    }

    int gehaaldTotal = 0;
    for (int i = 0; i < Cijfers.size(); i++)
    {       
        std::cout << "======================\n";
        std::cout << Cijfers[i];
        if (Cijfers[i] >= 5.5)
        {
            std::cout << ": voldoende\n";
            std::cout << "======================\n";            
            gehaaldTotal++;
        }
        else
        {
            std::cout << ": onvoldoende\n";
            std::cout << "======================\n";            
        }
    }
    std::cout << "Total gehaald: " << gehaaldTotal << "\n";
    std::cout << "======================\n";
}

void ShowStats()
{
    if (Cijfers.empty())
    {
        std::cout << "======================\n";
        std::cout << "geen cijfers\n";
        std::cout << "======================\n";
        return;
    }

    double hoogste = Cijfers[0];
    double laagste = Cijfers[0];
    double total = 0.0;

    for (int i = 0; i < Cijfers.size(); i++)
    {
        if (Cijfers[i] > hoogste)
        {
            hoogste = Cijfers[i];
        }
        if (Cijfers[i] < laagste)
        {
            laagste = Cijfers[i];
        }
        total += Cijfers[i];
    }

    std::cout << "======================\n";
    std::cout << "Hoogste Cijfer: " << hoogste << "\n";
    std::cout << "Laagste Cijfer: " << laagste << "\n";
    std::cout << "gemiddelde Cijfer: " << total / Cijfers.size() << "\n";
    std::cout << "======================\n";
}