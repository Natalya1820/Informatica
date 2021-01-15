#include <iostream>

int main()
{
    int a;
    std::cout << "Vvedite a" << std::endl;
    std::cin >> a;
    for (int y = 0; y < a; y++)
    {
        for (int x = 0; x < a; x++)
        {
            if (x == y || x == a - y - 1)
            {
                std::cout << "**";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
}