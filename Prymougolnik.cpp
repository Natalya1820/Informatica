#include <iostream>

int main()
{
    int a;
    int b;
    std::cout << "Vvedite a" << std::endl;
    std::cout << "Vvedite b" << std::endl;
    std::cin >> a >> b;
    for (int y = 0; y < a; y++)
    {
        for (int x = 0; x < b; x++)
        {
            std::cout << "**";
        }
        std::cout << std::endl;
    }
} 