#include <iostream>

int main()
{
     int a;
     std::cout « "Vvedite a" « std::endl;
     std::cin » a;
     for (int y = 0; y < a; y++)
  {
     for (int x = 0; x < a; x++)
   {
      std::cout « "**";
   }
     std::cout « std::endl;
  }
} 