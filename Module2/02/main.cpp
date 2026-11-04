#include <iostream>
#include <vector>

void Verdubblen(int& getal);
void Gemiddeld(const std::vector<double>& getalen);
void MinMax(const std::vector<double>& getalen);

int getal = 5;
std::vector<double> getalen = {10, 20, 25, 30};

int main()
{
    Verdubblen(getal);
    Gemiddeld(getalen);
    MinMax(getalen);
}

void Verdubblen(int& getal)
{
    getal *= 2;
    std::cout << getal << "\n";
}

void Gemiddeld(const std::vector<double>& getalen)
{
    double gemiddeld = 0;
    for (int i = 0; i < getalen.size(); i++)
    {
        gemiddeld += getalen[i];
    }
    gemiddeld /= getalen.size();
    std::cout << gemiddeld << "\n";
}

void MinMax(const std::vector<double>& getalen)
{
    double kleinste = getalen[0];
    double grootste = getalen[0];

    for (int i = 0; i < getalen.size(); i++)
    {
        if (getalen[i] < kleinste)
        {
            kleinste = getalen[i];
        }
        if (getalen[i] > grootste)
        {
            grootste = getalen[i];
        }
    }

    std::cout << "kleinste: " << kleinste << "\n";
    std::cout << "grootste: " << grootste << "\n";
}