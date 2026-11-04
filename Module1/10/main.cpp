// #include <iostream>
// #include <string>
// #include <vector>

// int main()
// {
//     std::vector<double> getalen = {4.0, 3.3, 4.6, 3.9};
//     for (int i = 0; i < getalen.size(); i++)
//     {
//         std::cout << getalen[i] << "\n";
//     }
//     return 0;
// }

#include <iostream>
#include <string>
#include <vector>

int main()
{
    double Total = 0.0;
    std::vector<double> getalen = {4.0, 3.3, 4.6, 3.9};
    for (int i = 0; i < getalen.size(); i++)
    {
        Total += getalen[i];
    }
    std::cout << Total;
    return 0;
}