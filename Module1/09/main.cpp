#include <iostream>
#include <string>

void Groet(std::string name);
int Optellen(int a, int b);
int Hoogste(int a, int b, int c);

int main()
{
    Groet("Niklas");
    std::cout << Optellen(3, 4) << "\n";
    std::cout << Hoogste(3,5,27) << "\n";
}

void Groet(std::string name)
{
    std::cout << "Hello " + name << "\n";
}

int Optellen(int a, int b)
{
    return a + b;
}

int Hoogste(int a, int b, int c)
{
    int Hoogste = a;
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}