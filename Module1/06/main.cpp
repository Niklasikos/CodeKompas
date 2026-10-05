#include <iostream>
#include <string>

bool quit = false;
int choice;
int main()
{
    while (!quit)
    {
        std::cout << "================\n";
        std::cout << "Menu Options:\n";
        std::cout << "1: Hello\n";
        std::cout << "2: Hello\n";
        std::cout << "3: Bye\n";
        std::cout << "4: Quit\n";
        std::cout << "1-4:";
        std::cin >> choice;

        switch (choice)
        {
            case 1:
                std::cout << "hello\n";
                break;

            case 2:
                std::cout << "hello\n";
                break;

            case 3:
                std::cout << "Bye\n";
                break;

            case 4:
                std::cout << "goodbye\n";
                quit = true;
                break;

            default:
                std::cout << "no fitting anwser found\n";
                break;
        }
    }
    return 0;
}