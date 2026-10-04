#include <iostream>
#include <string>

int main()
{
    std::string text1 = "ying";
    std::string text2 = "yang";
    std::cout << text1 + "\n";
    std::cout << text2 + "\n";
    std::swap(text1, text2);
    std::cout << text1 + "\n";
    std::cout << text2 + "\n";
    return 0;
}