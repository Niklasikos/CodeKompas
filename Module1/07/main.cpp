#include <iostream>
#include <string>

double Totalgetaal = 0;
double currentGetaal = 1;
int main()
{
    while (currentGetaal != 0)
    {
        std::cout << "Getaal?:\n";
        std::cin >> currentGetaal;
        Totalgetaal += currentGetaal;
    }
    std::cout << "totaal Getaal:" << Totalgetaal << "\n";
    return 0;
}